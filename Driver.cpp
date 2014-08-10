#include <iostream>
#include <sstream>
#include "Driver.hpp"
namespace yy {
Driver::Driver() {}

Driver::~Driver() {}

void
Driver::error(const std::string& m) {
	std::cerr << m << std::endl;
}

void
Driver::error(const class location& l, const std::string& m) {
	std::stringstream ss;
	ss << l << ":" << m;
	error(ss.str());
}

} // namespace yy

