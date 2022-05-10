#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap() 
{
	std::cout << "FragTrap constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " constructor is being called" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy Constructor called of FragTrap" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energy = copy._energy;
	this->_hitpoints = copy._hitpoints;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap::Destructor called" << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	(void) assign;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Yeey guys, it's me the " << this->_name << " FragTrap!" << std::endl;
}