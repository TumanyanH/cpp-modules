#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		
		~FragTrap();
		
		FragTrap & operator=(const FragTrap &assign);
		void highFivesGuys(void);
		
	private:
		FragTrap();
};

#endif