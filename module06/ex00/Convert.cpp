#include "Convert.hpp"

// Constructors
Convert::Convert()
{
	std::cout << "\e[0;33mDefault Constructor called of Convert\e[0m" << std::endl;
}

Convert::Convert(const Convert &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Convert\e[0m" << std::endl;
}


// Destructor
Convert::~Convert()
{
	std::cout << "\e[0;31mDestructor called of Convert\e[0m" << std::endl;
}


// Operators
Convert & Convert::operator=(const Convert &assign)
{
	(void) assign;
	return *this;
}

