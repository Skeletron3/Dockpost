#include "Lexer.hh"

Dockpost::Token Dockpost::Lexer::Lex() {
	token.Erase();
	LexedCounter++;
	switch(SourceCode[PositionInSourceCode]) {
		default:
			token.TokenSource = SourceCode[PositionInSourceCode];
			token.TokenType = Dockpost_token_type_Uknown;
			PositionInSourceCode++;
			break;
		// Handle EOF
		case '\0':
			Handle_EOF();
			break;

		// Handle identifiers
		// Lower case
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
		// Upper case
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		// Special allowed starting characters
		case '_':
			Handle_Identifiers();
			break;

		// Handle numbers
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			Handle_Numbers();
			break;
	}
	return token;
}