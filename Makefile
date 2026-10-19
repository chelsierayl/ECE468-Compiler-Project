clean:
	/bin/rm -rf compiler
	/bin/rm -rf MicroC.interp
	/bin/rm -rf MicroC.tokens
	/bin/rm -rf MicroCBaseListener.cpp MicroCBaseListener.h
	/bin/rm -rf MicroCLexer.cpp MicroCLexer.h MicroCLexer.interp
	/bin/rm -rf MicroCParser.cpp MicroCParser.h

#autograder version attempt
compiler:
	antlr -Dlanguage=Cpp MicroC.g4
	g++ -std=c++20 -Iantlr4-runtime main.cpp MicroCLexer.cpp MicroCParser.cpp MicroCListener.cpp MicroCBaseListener.cpp \
	-lantlr4-runtime -o compiler

#this version works on mine
#compiler:
#	g++ -std=c++20 -I"/mnt/c/Users/Chel Drew/Downloads/antlr-dist/headers" main.cpp MicroCLexer.cpp MicroCParser.cpp MicroCListener.cpp MicroCBaseListener.cpp \
#	"/mnt/c/Users/Chel Drew/Downloads/antlr-dist/libs/linux/libantlr4-runtime.a" -o compiler

#I made this so I could test fast
test:
	./runme tests/tests/test1.uC outputs/test1.out
	diff outputsExpected/outputs/test1.out outputs/test1.out
	./runme tests/tests/test2.uC outputs/test2.out
	diff outputsExpected/outputs/test2.out outputs/test2.out
	./runme tests/tests/test3.uC outputs/test3.out
	diff outputsExpected/outputs/test3.out outputs/test3.out
	./runme tests/tests/test4.uC outputs/test4.out
	diff outputsExpected/outputs/test4.out outputs/test4.out
	./runme tests/tests/test5.uC outputs/test5.out
	diff outputsExpected/outputs/test5.out outputs/test5.out
	./runme tests/tests/test6.uC outputs/test6.out
	diff outputsExpected/outputs/test6.out outputs/test6.out
	./runme tests/tests/test7.uC outputs/test7.out
	diff outputsExpected/outputs/test7.out outputs/test7.out
	./runme tests/tests/test8.uC outputs/test8.out
	diff outputsExpected/outputs/test8.out outputs/test8.out
	./runme tests/tests/test9.uC outputs/test9.out
	diff outputsExpected/outputs/test9.out outputs/test9.out
	./runme tests/tests/test10.uC outputs/test10.out
	diff outputsExpected/outputs/test10.out outputs/test10.out
	./runme tests/tests/test11.uC outputs/test11.out
	diff outputsExpected/outputs/test11.out outputs/test11.out