#include "../common.hh"
#include "../Token/Token.hh"
#include "../Lexer/Lexer.hh"
#include <vector>

#include "../config.h"

int main() {
	Dockpost::Lexer lexer;
	Dockpost::Token token;
	
	lexer.Keywords = {
		"int",
		"long",
		"short",
		"double",
		"float",

		"char",
		"string",

		"bool",

		"signed",
		"unsigned",
		"inline",
		"const",
		"delete",
		"new",

		"if",
		"while",
		"do",
		"for",
		"ret",
		"break",
		"continue",

		"switch",
		"case",

		"true",
		"false",

		"try",
		"except",
		"throw",
		"catch",

		"class",

		"and",
		"or",
		"xor",
		"not",
	};
	
	lexer.SourceCode = "int main(string[] argv)";
	do {
		token = lexer.Lex();
		lexer.Tokens.push_back(token);
		cout << "\"" << token.TokenSource << "\" " << token.TokenType << endl;
	} while(token.TokenType != Dockpost_token_type_EOF);
	return 0;
}