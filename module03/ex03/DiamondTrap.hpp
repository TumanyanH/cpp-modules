#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		// Constructors
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		
		// Destructor
		~DiamondTrap();
		
		// Operators
		DiamondTrap & operator=(const DiamondTrap &assign);

		void	attack( const std::string &target );
		void	whoAmI( void );
	private:
		std::string _name;
		DiamondTrap();
};

#endif