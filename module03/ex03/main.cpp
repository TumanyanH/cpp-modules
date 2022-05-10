#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap di4mondtp("di4mondtp");
	di4mondtp.attack("Handsome Jack");
	di4mondtp.takeDamage(6);
	di4mondtp.beRepaired(4);
	di4mondtp.takeDamage(3);
	di4mondtp.guardGate();
	di4mondtp.highFivesGuys();
	di4mondtp.whoAmI();
	di4mondtp.beRepaired(8);
	di4mondtp.takeDamage(17);
}