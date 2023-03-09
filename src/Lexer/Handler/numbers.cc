#include "../Lexer.hh"

void Dockpost::Lexer::Handle_Numbers() {
	while(isdigit(SourceCode[PositionInSourceCode])) {
		token.TokenSource += SourceCode[PositionInSourceCode];
		PositionInSourceCode++;
	}
	return;
}