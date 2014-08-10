%option nodefault c++ yylineno 
%option stack batch nounistd nounput
%option prefix="yy"

%{
#include "Driver.hpp"
#include "Parser.hpp"

typedef yy::Parser::token token;
typedef yy::Parser::token_type token_type;

#define YY_USER_ACTION { yylloc->columns(yyleng); }
#define yyterminate() return token::END

%}


%%

%{
	yylloc->step();
%}



%%
namespace yy {

Scanner::~Scanner() {}

} // namespace yy

#ifdef yylex
#	undef yylex
#endif
int
yyFlexLexer::yylex() {
	// shouldn't ever get here
	std::cerr << "in yyFlexLexer::yylex()!" << std::endl;
	return 0;
}

int
yyFlexLexer::yywrap() { return 1;}

