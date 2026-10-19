#include <fstream>
#include "antlr4-runtime.h"
#include "MicroCLexer.h"
#include "MicroCParser.h"

int main(int argc, char **argv) {

	std::ifstream inputFile(argv[1]);

	antlr4::ANTLRInputStream input(inputFile);
	MicroCLexer lexer(&input);
	
	antlr4::CommonTokenStream tokens(&lexer);
	MicroCParser parser(&tokens);

	parser.program();
	int errors;
	errors = parser.getNumberOfSyntaxErrors();

	if(errors != 0)
	{
		//decline
		std::ofstream(argv[2]) << "Not Accepted\n";

	}
	else{
		//accept
		std::ofstream(argv[2]) << "Accepted\n";
	}
	return 0;
}
