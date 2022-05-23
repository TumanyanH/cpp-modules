#include "Convert.hpp"

// Constructors
Convert::Convert() { }

Convert::Convert(std::string val)
{
	this->_val = val;
	this->tryChar();
	this->tryInt();
	this->tryFloat();
	this->tryDouble();
}

Convert::Convert(const Convert &copy)
{
	(void) copy;
}


// Destructor
Convert::~Convert() { }


// Operators
Convert & Convert::operator=(const Convert &assign)
{
	(void) assign;
	return *this;
}

void Convert::tryChar()
{
	int num_val;
	char c;

	std::cout << "Char: ";
	try {
		num_val = stoi(this->_val);
		if (!isprint(num_val))
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
		c = static_cast<char>(num_val);
		std::cout << "'" << c << "'" << std::endl;
	} catch(...) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::tryInt()
{
	int a;

	std::cout << "Int: ";
	try {
		a = stoi(this->_val);
		std::cout << a << std::endl;
	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::tryFloat()
{
	float a;

	std::cout << "Float: ";
	try {
		a = stof(this->_val);
		std::cout << a;
		if (a - static_cast<int>(a) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	} catch(...) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::tryDouble()
{
	double a;

	std::cout << "Double: ";
	try {
		a = stod(this->_val);
		std::cout << a;
		if (a - static_cast<int>(a) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	} catch(...) {
		std::cout << "impossible" << std::endl;
	}
}
