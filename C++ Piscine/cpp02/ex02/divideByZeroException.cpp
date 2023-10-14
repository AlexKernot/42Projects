#include "divideByZeroException.hpp"

const char* divideByZeroException::what() const throw() {
	return "Attempting to divide by 0";
}

divideByZeroException::divideByZeroException() : std::exception() {
	// No data to initialize
}

divideByZeroException::divideByZeroException(const divideByZeroException&) : std::exception() {
	// No data to copy
}

divideByZeroException::~divideByZeroException() throw() {
	// No data to destroy
}