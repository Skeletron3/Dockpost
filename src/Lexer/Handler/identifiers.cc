#include "../Lexer.hh"

void Dockpost::Lexer::Handle_Identifiers() {
	token.TokenType = Dockpost_token_type_Identifier;
	while((isalpha(SourceCode[PositionInSourceCode]) || isdigit(SourceCode[PositionInSourceCode]) || SourceCode[PositionInSourceCode] == '_')) {
		token.TokenSource += SourceCode[PositionInSourceCode];
		PositionInSourceCode++;
	}
	for(unsigned long i = 0; i < Keywords.size(); i++)
		if(token.TokenSource == Keywords[i])
			token.TokenType = Dockpost_token_type_Keyword;
	return;
}