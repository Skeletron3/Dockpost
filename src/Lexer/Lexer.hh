#ifndef Dockpost_Lexer_hh_
#define Dockpost_Lexer_hh_

#include "../common.hh"
#include "../Token/Token.hh"
#include <vector>

namespace Dockpost {
	class Lexer {
		public:
		string SourceCode = "";
		int PositionInSourceCode = 0;
		int LexedCounter = 0;
		std::vector<string> Keywords;
		std::vector<Token> Tokens;
		Token token;
		
		Token Lex();
		void Handle_EOF();
		void Handle_Identifiers();
		void Handle_Numbers();
	};
}

#endif