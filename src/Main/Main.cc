#include "../common.hh"
#include "../Token/Token.hh"
#include "../Lexer/Lexer.hh"
#include <vector>

#include "../config.h"

int main() {
	Dockpost::Lexer lexer;
	Dockpost::Token token;
	
	lexer.Keywords = {
		"printf",
		"while"
	};
	
	lexer.SourceCode = "int main(string[] argv)";
	do {
		token = lexer.Lex();
		lexer.Tokens.push_back(token);
		cout << "\"" << token.TokenSource << "\" " << token.TokenType << endl;
	} while(token.TokenType != Dockpost_token_type_EOF);
	return 0;
}