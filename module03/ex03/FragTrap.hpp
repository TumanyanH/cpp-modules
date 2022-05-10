#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		// Constructors
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		
		~FragTrap();
		
		FragTrap & operator=(const FragTrap &assign);
		void highFivesGuys(void);
		
	private:
};

#endif