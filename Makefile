clean:
	/bin/rm -rf compiler
	/bin/rm -rf MicroC.interp
	/bin/rm -rf MicroC.tokens
	/bin/rm -rf MicroCBaseListener.cpp MicroCBaseListener.h
	/bin/rm -rf MicroCLexer.cpp MicroCLexer.h MicroCLexter.interp
	/bin/rm -rf MicroCParser.cpp MicroCParser.h

compiler:
	antlr -Dlanguage=Cpp MicroC.g4 #java -jar antlr-4.13.2-complete.jar -Dlanguage=Cpp MicroC.g4
	g++ -std=c++20 main.cpp -o compiler
