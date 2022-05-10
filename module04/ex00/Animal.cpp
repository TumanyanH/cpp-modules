#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "Default Constructor called of Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Animal" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Destructor called of Animal" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	std::cout << "Copy assignment ooperator called of Animal" << std::endl;
	(void) assign;
	return *this;
}

void Animal::setType(std::string type)
{ this->_type = type; }

std::string Animal::getType() const
{ return this->_type; }

void Animal::makeSound() const {}