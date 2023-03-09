#include "Token.hh"

void Dockpost::Token::Erase() {
	TokenType = Dockpost_token_type_Uknown;
	TokenSource.erase();
	return;
}