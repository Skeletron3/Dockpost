#include "Token.hh"

void Dockpost::Token::Erase() {
	TokenType = Dockpost_token_type_data_uninitialised;
	TokenSource.erase();
	return;
}