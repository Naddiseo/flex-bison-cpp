#pragma once
#include <string>
#include "Parser.hpp"

#ifndef YY_DECL
#	define YY_DECL \
		yy::Parser::token_type \
		yy::Scanner::lex( \
				yy::Parser::semantic_type* yylval, \
				yy::Parser::location_type* yylloc, \
				yy::Driver& driver \
		)
#endif

#ifndef __FLEX_LEXER_H
#	undef yylex
#	include "Scanner.hpp"
#endif
#include "ScannerImpl.hpp"


namespace yy {


class Driver {
public:
	Driver();
	virtual ~Driver();

	std::string streamname;

	class Scanner* lexer = nullptr;

	void error(const std::string& m);
	void error(const class location& l, const std::string& m);
};

}

