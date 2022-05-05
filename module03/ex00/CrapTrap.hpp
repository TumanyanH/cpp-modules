#ifndef CRAPTRAP_HPP
# define CRAPTRAP_HPP

# include <iostream>
# include <string>

class CrapTrap
{
	public:
		// Constructors
		CrapTrap();
		CrapTrap(std::string name);
		CrapTrap(const CrapTrap &copy);
		
		// Destructor
		~CrapTrap();

		std::string getName();
		int getAttackDamage();
		int getHitpoints();
		int getEnergy();

		void setName(std::string name);
		void setAttackDamage(int score);
		void setHitpoints(int score);
		void setEnergy(int score);
		
		// Operators
		CrapTrap & operator=(const CrapTrap &assign);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	private:
		std::string _name;
		int _hitpoints;
		int _energy;
		int _attackDamage;
};

#endif