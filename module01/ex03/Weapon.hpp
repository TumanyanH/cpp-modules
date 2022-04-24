#ifndef WEAPON
#define WEAPON

#include <string>

class Weapon
{
private:
    std::string _type;
public:
    std::string getType() const;
    void setType(std::string type);

    Weapon( void );
    Weapon( std::string type );
    ~Weapon();
};

#endif
