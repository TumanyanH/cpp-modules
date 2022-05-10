#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " constructor is being called" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy Constructor called of ScavTrap" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energy = copy._energy;
	this->_hitpoints = copy._hitpoints;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap::Destructor called" << std::endl;
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	(void) assign;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hitpoints > 0)
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}