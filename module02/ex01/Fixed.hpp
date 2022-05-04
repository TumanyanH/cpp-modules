#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed
{
private:
    int _number;
    static const int _literal = 8;
public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed &copy);
    Fixed & operator=(const Fixed &assign);
    ~Fixed();

    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif