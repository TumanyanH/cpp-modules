#include "Zombie.hpp"

int main()
{
    int N = 2;
    int i = 0;

    Zombie *zombies = zombieHorde(N, "Steve");
    while (i < N)
    {
        zombies[i].announce();
        ++i;
    }
    delete[] zombies;
}