%skeleton "lalr1.cc"
%require "2.3"
%defines
%locations
%define parser_class_name {Parser}

%{
#include "Driver.hpp"


%}

%parse-param {class Driver& driver }
%lex-param {class Driver& driver } 
%initial-action {
	@$.begin.filename = @$.end.filename = &driver.streamname;
}

%token END 0 "end of file"

%start program
%%

program: END

	;

%%

void
yy::Parser::error(const location_type& loc, const std::string& msg) {
	driver.error(loc, msg);
}
