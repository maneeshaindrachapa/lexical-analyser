compiler: lex.yy.o parser.tab.o
	gcc -o compiler $^

parser.tab.h: parser.y
	bison --debug --verbose -d parser.y

parser.tab.c: parser.y
	bison -d parser.y

lex.yy.c: lexical.l parser.tab.h
	flex  lexical.l