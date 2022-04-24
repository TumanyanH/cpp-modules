#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = newZombie("Steve");
    Zombie *zombie2 = newZombie("Brandon");

    zombie1->announce();
    zombie2->announce();
    randomChump("John");
    randomChump("Freddy");

    delete zombie1;
    delete zombie2;
}