#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap " << name << " constructor is being called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy Constructor called of DiamondTrap" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energy = copy._energy;
	this->_hitpoints = copy._hitpoints;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap::Destructor called" << std::endl;
}


// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	(void) assign;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is " << this->_name << " and my hommie ClapTrap's name is " << ClapTrap::_name << std::endl;
}