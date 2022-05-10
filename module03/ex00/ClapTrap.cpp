#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _attackDamage(0)
{
	std::cout << "Parameterized constructor is being called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	(void) copy;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor being called" << std::endl;
}

unsigned int ClapTrap::getAttackDamage()
{ return (this->_attackDamage); }

unsigned int ClapTrap::getEnergy()
{ return (this->_energy); }

std::string ClapTrap::getName()
{ return (this->_name); }

unsigned int ClapTrap::getHitpoints()
{ return (this->_hitpoints); }

void ClapTrap::setAttackDamage(unsigned int score)
{ this->_attackDamage = score; }

void ClapTrap::setEnergy(unsigned int score)
{ this->_energy = score; }

void ClapTrap::setName(std::string name)
{ this->_name = name; }

void ClapTrap::setHitpoints(unsigned int score)
{ this->_hitpoints = score; }

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	(void) assign;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hitpoints > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy > 0 && this->_hitpoints > 0)
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " took damage of " << amount << " hitpoints!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << "is dead(";
		this->~ClapTrap();
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hitpoints > 0)
	{
		this->_energy--;
		this->_hitpoints += amount;
		std::cout << "ClapTrap " << this->_name << " being repaired with amount of " << amount << " hitpoints!" << std::endl;
	}
}
