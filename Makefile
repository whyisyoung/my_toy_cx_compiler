# Note:
# target:
# \TAB cmd
# Use TAB instead of 4 spaces!!!


$(shell flex cxLex.l)
$(shell bison -d cxYacc.y)

CC      = gcc
SOURCES = lex.yy.c cxYacc.tab.c
# -w: Inhibit all warning messages.
CFLAGS = -w
EXECUTABLE = cx

all:
	gcc $(SOURCES) $(CFLAGS) -o $(EXECUTABLE)

clean:
	rm -rf *o $(EXECUTABLE)
	rm -rf $(SOURCES) cxYacc.tab.h