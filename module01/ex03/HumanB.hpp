#ifndef HUMAN_B
#define HUMAN_B

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *_weapon;
public:
    HumanB( void );
    HumanB( std::string name );
    ~HumanB( void );

    void attack();
    void setWeapon(Weapon &weapon);
};

#endif