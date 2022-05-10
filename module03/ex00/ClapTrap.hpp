#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		
		// Destructor
		~ClapTrap();

		std::string getName();
		unsigned int getAttackDamage();
		unsigned int getHitpoints();
		unsigned int getEnergy();

		void setName(std::string name);
		void setAttackDamage(unsigned int score);
		void setHitpoints(unsigned int score);
		void setEnergy(unsigned int score);
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	protected:
		ClapTrap();

		std::string _name;
		int _hitpoints;
		int _energy;
		int _attackDamage;
};

#endif