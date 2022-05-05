#ifndef FIXED
#define FIXED

#include <iostream>
#include <cmath>

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

    bool operator>(const Fixed &assign);
    bool operator<(const Fixed &assign);
    bool operator>=(const Fixed &assign);
    bool operator<=(const Fixed &assign);
    bool operator==(const Fixed &assign);
    bool operator!=(const Fixed &assign);
    
    Fixed & operator+(const Fixed &assign);
    Fixed & operator-(const Fixed &assign);
    Fixed & operator*(const Fixed &assign);
    Fixed & operator/(const Fixed &assign);

    Fixed & operator++();
    Fixed & operator++(int);
    Fixed & operator--();
    Fixed & operator--(int);

    static Fixed const & min(Fixed const &a, Fixed const &b);
    static Fixed & min(Fixed &a, Fixed &b);
    static Fixed const & max(Fixed const &a, Fixed const &b);
    static Fixed & max(Fixed &a, Fixed &b);
    ~Fixed();

    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
bool operator>(const Fixed &assign1, const Fixed &assign2);
bool operator<(const Fixed &assign1, const Fixed &assign2);

#endif