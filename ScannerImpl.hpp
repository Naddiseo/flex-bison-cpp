#pragma once

#ifndef YY_DECL
#	define YY_DECL \
		Parser::token_type \
		Scanner::lex( \
			yy::Parser::semantic_type* yylval, \
			yy::Parser::location_type* yylloc, \
			::Driver& driver \
		)
#endif

class yyFlexLexer;
namespace yy {


class Scanner : public yyFlexLexer {
public:
	Scanner(std::istream* arg_yyin = 0, std::ostream* arg_yyout = 0);
	virtual ~Scanner();
	virtual Parser::token_type lex(
		Parser::semantic_type* yylval,
		Parser::location_type* yylloc,
		Driver& driver
	);

};

}
#undef yylex
#define yylex driver.lexer->lex

