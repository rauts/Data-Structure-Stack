#pragma once


#include <exception>

class StackOverFlowExecption : public std::exception
{
	const char* what() const noexcept {
		return "\nException: Stack Overflow\n";
	}
};
