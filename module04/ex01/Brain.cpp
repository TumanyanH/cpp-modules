#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Brain" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	(void) assign;
	return *this;
}

