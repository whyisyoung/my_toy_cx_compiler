%{
    #include "gencode.h"
    #define YYDEBUG 1
    #ifdef YYDEBUG
        #define TRACE printf("reduce at line %d\n", __LINE__);
    #else
        #define TRACE
    #endif
%}


%union {
    char *ident;
    int number;
}

/* reserved words */
// %token SYM_main
%token SYM_call, SYM_const
// %token SYM_do
%token SYM_function, SYM_read, SYM_odd
%token SYM_int, SYM_bool, SYM_while
%token SYM_write //, SYM_ident, SYM_number
%token SYM_if
%token SYM_else
%token SYM_for
%token SYM_true
%token SYM_false

/* operators */
%token SYM_becomes                          /* level 14 */
%token SYM_or                               /* level 12 */
%token SYM_and                              /* level 11 */
%token SYM_xor                              /* level 9 */
%token SYM_eql, SYM_neq                     /* level 7 */
%token SYM_lss, SYM_leq, SYM_gtr, SYM_geq   /* level 6 */
%token SYM_plus, SYM_minus                  /* level 4 */
%token SYM_times, SYM_slash, SYM_mod        /* level 3 */
%token SYM_not, SYM_addself, SYM_minusself  /* level 2 */
%token SYM_lparen, SYM_rparen, SYM_lbrace, SYM_rbrace  /* level 1 */
%token SYM_semicolon

%token SYM_lcomment, SYM_rcomment

%token <ident> SYM_ident
%token <number> SYM_number

/* 结合性 */
%right SYM_becomes
%right SYM_not
%right SYM_addself
%right SYM_minusself

%type <ident> some_ident
%type <ident> another_ident

%%

// rules secleciton

program:
    { level--; } // 在 block 里会恢复为 0
    block
    ;

block:
    SYM_lbrace // Warning: block 的这些操作应该放到 function 里面去
    {
        level++;
        data_allocation_index = 3;
        level_registration[level].init_tx = table_index;
        table[table_index].adr = code_index;
        gen_middle_code(jmp, 0, 1); // 为什么这里是 1
        if(level > LEV_MAX)
            error(32);
    }
    declaration_list
    {
        code[table[level_registration[level].init_tx].adr].adr = code_index; // 填写过程体在 code 中的入口地址
        table[level_registration[level].init_tx].adr = code_index;  // 填写过程体在 table 中的入口地址
        table[level_registration[level].init_tx].size = data_allocation_index;
        level_registration[level].init_cx = code_index;
        gen_middle_code(ini, 0, data_allocation_index);
    }
    statement_list
    {
        gen_middle_code(opr, 0, 0);
        printf("\n");
    }
    SYM_rbrace
    ;

declaration_list:
    | declaration_list declaration
    ;

declaration:
    SYM_int some_ident
    {
        strcpy(ident, $2);
        enter_object_to_table(variable);
    }  SYM_semicolon


    | SYM_bool another_ident
    {
        strcpy(ident, $2);
        enter_object_to_table(variable); // 暂时将 bool 型变量当作 variable 处理
    } SYM_semicolon


    | SYM_const SYM_int some_ident
    { strcpy(ident, $3); }
    SYM_becomes SYM_number
    {
        number = $6;
        enter_object_to_table(constant);
    } SYM_semicolon


    | SYM_function some_ident // SYM_semicolon
    {
        strcpy(ident, $2);
        enter_object_to_table(func);
        level_registration[level].init_dx = data_allocation_index;
    }
    block
    {
        level--; // Why???
        data_allocation_index = level_registration[level].init_dx;
    }
    ;

some_ident:
    SYM_ident
    ;

another_ident:
    SYM_ident
    ;

statement_list:
    | statement_list statement
    ;

statement:
    assignment_statement SYM_semicolon


    | SYM_if SYM_lparen another_expression SYM_rparen
    {
        $<number>$ = code_index;
        gen_middle_code(jpc, 0, 0); // 回填用 L1
    }
    statement
    {
        $<number>$ = code_index;
        gen_middle_code(jmp, 0, 0); // 回填用 L2， 如果条件成立，执行完 statement 后应该无条件跳转至 if..else.. 之后的地址， 该地址待回填
        code[$<number>5].adr = code_index; // L1
    }
    else_statement
    {
        code[$<number>7].adr = code_index; // L2
    } SYM_semicolon


    | SYM_while
    {
        $<number>$ = code_index;
    }
    SYM_lparen another_expression SYM_rparen
    {
        $<number>$ = code_index;
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
    }
    statement
    {
        gen_middle_code(jmp, 0, $<number>2); // 无条件跳转回 while 循环
        code[$<number>6].adr = code_index;
    } SYM_semicolon


    | SYM_for SYM_lparen init_expresstion  SYM_semicolon
    {
        $<number>$ = code_index; // L1, $<number>5
    }
    another_expression SYM_semicolon
    {
        $<number>$ = code_index;   // $<number>8
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
        gen_middle_code(jmp, 0, 0); // 条件成立先执行 statement(L4), 再执行 i++
    }
    additive_expresstion
    {
        gen_middle_code(jmp, 0, $<number>5); // jmp 0 L1
        code[$<number>8 + 1].adr = code_index; // jmp 0 L4 回填
    } SYM_rparen
    statement
    {
        gen_middle_code(jmp, 0, $<number>8 + 2); // jmp 0 L2 , 先跳转回去执行 i++， 也就是 L2
        code[$<number>8].adr = code_index; // jpc 0 L3 回填
    } SYM_semicolon


    | SYM_write some_expression SYM_semicolon
    {
        gen_middle_code(opr, 0, 14); // Warning: 此处的 write 是为了输出变量，实际上也就是输出栈顶内容
    }


    | SYM_read some_ident SYM_semicolon
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(opr, 0, 16);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }


    | additive_statement SYM_semicolon


    | SYM_call some_ident SYM_semicolon
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(1);
        else if(table[pos].kind != func)
            error(3);
        else
            gen_middle_code(cal, level - table[pos].level, table[pos].adr);
    }


    //| block
    | SYM_lbrace statement_list SYM_rbrace
    ;

else_statement: // 提取公因子
    | SYM_else statement
    ;

expression:
    some_expression
    | another_expression
    ;

some_expression:
    SYM_minus some_term // 负号
        { gen_middle_code(opr, 0, 1); }
    | some_term SYM_plus some_term
        { gen_middle_code(opr, 0, 2); }
    | some_term SYM_minus some_term
        { gen_middle_code(opr, 0, 3); }
    | some_term
    ;

some_term:
    some_factor SYM_times some_factor
        { gen_middle_code(opr, 0, 4); }
    | some_factor SYM_slash some_factor
        { gen_middle_code(opr, 0, 5); }
    | some_factor SYM_mod some_factor
        { gen_middle_code(opr, 0, 6); }
    | some_factor SYM_xor some_factor
        { gen_middle_code(opr, 0, 15); }
    | some_factor
    ;

some_factor:
    some_ident
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
            case constant:
                gen_middle_code(lit, 0, table[pos].val);
                break;
            case variable:
                gen_middle_code(lod, level-table[pos].level, table[pos].adr);
                break;
            case func:
                error(4);
                break;
            }
        }
    }


    | SYM_number
    {
        int num = $1;
        if(num > CONST_MAX) {
            error(31);
            num = 0;
        }
        gen_middle_code(lit, 0, num);
    }


    | SYM_lparen some_expression SYM_rparen
    ;

another_expression:
    another_expression SYM_or another_term
        { gen_middle_code(opr, 0, 17); }
    | another_term
    ;

another_term:
    another_term SYM_and another_factor
        { gen_middle_code(opr, 0, 18);  }
    | another_factor
    ;

another_factor:
    another_ident // 与 0 比较
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
            case constant:
                gen_middle_code(lit, 0, table[pos].val); break;
            case variable:
                gen_middle_code(lod, level - table[pos].level, table[pos].adr); break;
                gen_middle_code(lit, 0, 0);
                gen_middle_code(opr, 0, 12); // ident > 0
            case func:
                error(4); break;
            }
        }
    }

    | SYM_true
        { gen_middle_code(lit, 0, 1); }

    | SYM_false
        { gen_middle_code(lit, 0, 0); }
    | SYM_not another_factor
        { gen_middle_code(opr, 0, 19); }
    | SYM_lparen another_expression SYM_rparen

    | condition
    ;

condition:
    left_condition SYM_lss some_expression
        { gen_middle_code(opr, 0, 10); }
    | left_condition SYM_leq some_expression
        { gen_middle_code(opr, 0, 13); }
    | left_condition SYM_gtr some_expression
        { gen_middle_code(opr, 0, 12); }
    | left_condition SYM_geq some_expression
        { gen_middle_code(opr, 0, 11); }
    | left_condition SYM_eql some_expression
        { gen_middle_code(opr, 0, 8); }
    | left_condition SYM_neq some_expression
        { gen_middle_code(opr, 0, 9); }
    | SYM_odd some_expression
        { gen_middle_code(opr, 0, 7); }
    // | some_expression SYM_lss left_condition // TODO
    // | some_expression SYM_leq left_condition
    // | some_expression SYM_gtr left_condition
    // | some_expression SYM_geq left_condition
    // | some_expression SYM_eql left_condition
    // | some_expression SYM_neq left_condition
    ;


left_condition:
    some_ident
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
            case constant:
                gen_middle_code(lit, 0, table[pos].val); break;
            case variable:
                gen_middle_code(lod, level - table[pos].level, table[pos].adr); break;
            case func:
                error(4); break;
            }
        }
    }

    | SYM_number
    {
        int num = $1;
        if(num > CONST_MAX) {
            error(31);
            num = 0;
        }
        gen_middle_code(lit, 0, num);
    }
    ;

assignment_statement:
    some_ident
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            if(table[pos].kind != variable){
                error(12);
                pos = 0;
            }
        }
        $<number>$ = pos;
    }
    SYM_becomes expression
    {
        int pos;
        if($<number>2 != 0) { // 其实就是 SYM_ident 后面那个大括号保留下来的 i， 因为此处无法访问上一个段落的 i, 所以要在上一段中用 $<number>$2 保存下来， $<number>$ 是指定 i 的类型为 数字
            pos = $<number>2;
            gen_middle_code(sto, level-table[pos].level, table[pos].adr);
        }
    }
    ;

init_expresstion:
    | assignment_statement
    ;

additive_statement:
    some_ident SYM_addself
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else if(table[pos].kind != variable) {
            error(6);
        }
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    | SYM_addself some_ident
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    | some_ident SYM_minusself
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    | SYM_minusself some_ident
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    ;

additive_expresstion:
    | additive_statement
    ;


%%

/////////////////////////////////////////////////////////////////////////////
// programs section

yyerror(char *s)
{
    error_count++;
    printf("%s in line %d\n", s, line);
    fprintf(error_file, "%s in line %d\n", s, line);
}

int main()
{
    #if YYDEBUG
        yydebug = 1;
    #endif

    if((error_file = fopen("error.txt", "w"))==NULL) {
        printf("Cann't open file!\n");
        exit(0);
    }

    printf("Input file (absolute path): \n");
    fprintf(error_file, "Input file (absolute path): \n");

    scanf("%s", src_file_name);
    fprintf(error_file, "%s\n", src_file_name);

    if((fin = fopen(src_file_name, "r")) == NULL) {
        printf("Cann't open file according to given filename\n");
        exit(0);
    }

    redirectInput(fin);

    // printf("List object code?[y/n]");

    // scanf("%s", src_file_name);
    // fprintf(error_file,"\nList object code?\n");
    // if(src_file_name[0]=='y')
    //     listswitch=true;
    // else
    //     listswitch=false;
    error_count = 0;
    code_index = 0;

    if((middle_code_file = fopen("middle_code.txt", "w")) == NULL) {
        printf("Cann't open middle_code.txt file!\n");
        exit(0);
    }

    if((stack_data_file = fopen("stack.txt", "w")) == NULL) {
        printf("Cann't open stack.txt file!\n");
        exit(0);
    }

    yyparse();

    fclose(middle_code_file);
    fclose(error_file);

    if(error_count == 0) {
        print_middle_code();
        interpret();
    }
    else
        printf("%d errors in CX program\n", error_count);

    fclose(fin);
    getchar();
    return 0;
}
