#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Default Constructor called of Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Dog" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "Destructor called of Dog" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	(void) assign;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "*Barking :P*" << std::endl;
}