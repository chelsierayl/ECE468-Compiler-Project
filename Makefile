clean:
	/bin/rm -rf compiler
	/bin/rm -rf MicroC.interp
	/bin/rm -rf MicroC.tokens
	/bin/rm -rf MicroCBaseListener.cpp MicroCBaseListener.h
	/bin/rm -rf MicroCLexer.cpp MicroCLexer.h MicroCLexer.interp
	/bin/rm -rf MicroCParser.cpp MicroCParser.h

compiler:
	antlr -Dlanguage=Cpp MicroC.g4 
	g++ -std=c++20 -lantlr4-runtime main.cpp MicroCLexer.cpp MicroCParser.cpp MicroCListener.cpp MicroCBaseListener.cpp -lantlr4-runtime -o compiler
