#include "ScavTrap.hpp"

int main()
{
    ScavTrap sc4vtp("sc4vtp");
    sc4vtp.attack("Handsome Jack");
    sc4vtp.takeDamage(6);
    sc4vtp.beRepaired(4);
    sc4vtp.takeDamage(3);
    sc4vtp.guardGate();
    sc4vtp.beRepaired(8);
    sc4vtp.takeDamage(17);
}