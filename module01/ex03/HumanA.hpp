#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;
public:
    HumanA( void );
    HumanA( std::string name, Weapon &weapon );
    ~HumanA();

    void attack();
};

#endif