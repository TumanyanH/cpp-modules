#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    Fixed::_number = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_number = copy.getRawBits();
}

Fixed::Fixed( const int value )
{
    std::cout << "Int constructor called" << std::endl;
    this->_number = value << Fixed::_literal;
}

Fixed::Fixed( const float number )
{
    std::cout << "Float constructor called" << std::endl;
    this->_number = (int)(roundf(number * (1 << Fixed::_literal)));
}

Fixed & Fixed::operator=(const Fixed &assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assign)
        this->_number = assign.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_number);
}

void Fixed::setRawBits( int const raw )
{
    this->_number = raw;
}
