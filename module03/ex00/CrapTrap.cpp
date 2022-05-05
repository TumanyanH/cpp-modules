#include "CrapTrap.hpp"

// Constructors
CrapTrap::CrapTrap()
{
}

CrapTrap::CrapTrap(std::string name) : _hitpoints(10), _energy(10), _attackDemage(10)
{
	this->_name = name;
}

CrapTrap::CrapTrap(const CrapTrap &copy)
{
	(void) copy;
}


// Destructor
CrapTrap::~CrapTrap()
{
}

int CrapTrap::getAttackDamage()
{ return (this->_attackDamage); }

int CrapTrap::getEnergy()
{ return (this->_energy); }

std::string CrapTrap::getName()
{ return (this->_name); }

int CrapTrap::getAttackDamage()
{ return (this->_attackDamage); }

// Operators
CrapTrap & CrapTrap::operator=(const CrapTrap &assign)
{
	(void) assign;
	return *this;
}

void CrapTrap::attack(const std::string& target)
{

}

void CrapTrap::takeDamage(unsigned int amount)
{

}

void CrapTrap::beRepaired(unsigned int amount)
{

}
