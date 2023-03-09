#ifndef Dockpost_Token_hh_
#define Dockpost_Token_hh_

#include "../common.hh"

#define Dockpost_token_type_Uknown -1
#define Dockpost_token_type_EOF 0

#define Dockpost_token_type_Identifier 1
#define Dockpost_token_type_Keyword 2

#define Dockpost_token_type_data_int 3
#define Dockpost_token_type_data_long 4
#define Dockpost_token_type_data_short 5
#define Dockpost_token_type_data_double 6
#define Dockpost_token_type_data_float 7
#define Dockpost_token_type_data_string 8
#define Dockpost_token_type_data_char 9
#define Dockpost_token_type_data_bool 10

#define Dockpost_token_type_Space 11
#define Dockpost_token_type_Tab 12
#define Dockpost_token_type_Newline 13

namespace Dockpost {
	class Token {
		public:
		int TokenType;
		string TokenSource;
		void Erase();
	};
}

#endif