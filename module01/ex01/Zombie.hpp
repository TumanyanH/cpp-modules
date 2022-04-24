#ifndef ZOMBIE
#define ZOMBIE

#include <string>
#include <iostream>

class  Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
    void setName( std::string name );

    Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif