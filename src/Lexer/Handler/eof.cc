#include "../Lexer.hh"

void Dockpost::Lexer::Handle_EOF() {
	token.TokenSource = SourceCode[PositionInSourceCode];
	token.TokenType = Dockpost_token_type_EOF;
	PositionInSourceCode++;
	return;
}