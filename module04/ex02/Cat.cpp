#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Constructor called of Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Cat" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "Destructor called of Cat" << std::endl;
	delete this->_brain;
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	(void) assign;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow ^^" << std::endl;
}