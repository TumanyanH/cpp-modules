#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name )
{
    this->_name = name;
}

void Zombie::setName( std::string name )
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed" << std::endl;
}