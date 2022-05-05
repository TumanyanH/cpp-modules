#include "Fixed.hpp"

Fixed::Fixed()
{
    Fixed::_number = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    this->_number = copy._number;
}

Fixed::Fixed( const int value )
{
    this->_number = value << Fixed::_literal;
}

Fixed::Fixed( const float number )
{
    this->_number = (int)(roundf(number * (1 << Fixed::_literal)));
}

Fixed & Fixed::operator=(const Fixed &assign)
{
    if (this != &assign)
        this->_number = assign._number;
	return *this;
}

bool Fixed::operator==(const Fixed &assign)
{ return (this->getRawBits() == assign.getRawBits()); }

bool Fixed::operator>(const Fixed &assign)
{ return (this->getRawBits() > assign.getRawBits()); }

bool Fixed::operator<(const Fixed &assign)
{ return (this->getRawBits() < assign.getRawBits()); }

bool Fixed::operator>=(const Fixed &assign)
{ return (this->getRawBits() >= assign.getRawBits()); }

bool Fixed::operator<=(const Fixed &assign)
{ return (this->getRawBits() <= assign.getRawBits()); }

bool Fixed::operator!=(const Fixed &assign)
{ return (this->getRawBits() != assign.getRawBits()); }


bool operator>(const Fixed &assign1, const Fixed &assign2)
{ return (assign1.getRawBits() > assign2.getRawBits()); }

bool operator<(const Fixed &assign1, const Fixed &assign2)
{ return (assign1.getRawBits() < assign2.getRawBits()); }


Fixed & Fixed::operator+(const Fixed &assign)
{
    this->setRawBits(this->getRawBits() + assign.getRawBits());
    return *this;
}
Fixed & Fixed::operator-(const Fixed &assign)
{
    this->setRawBits(this->getRawBits() - assign.getRawBits());
    return *this;
}

Fixed & Fixed::operator*(Fixed const &assign)
{
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)assign.getRawBits());
	this->setRawBits((tmp1 * tmp2) / (1 << Fixed::_literal));
	return (*this);
}

Fixed & Fixed::operator/(Fixed const &assign)
{
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)assign.getRawBits());
	this->setRawBits((tmp1 * (1 << Fixed::_literal)) / tmp2);
	return (*this);
}

Fixed & Fixed::operator++()
{
	this->_number++;
	return (*this);
}

Fixed & Fixed::operator++(int)
{
	Fixed *temp = new Fixed(*this);
	operator++();
	return (*temp);
}

Fixed & Fixed::operator--()
{
	this->_number--;
	return (*this);
}

Fixed & Fixed::operator--(int)
{
    Fixed *temp = new Fixed(*this);
	operator--();
	return (*temp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed::~Fixed() { }

int Fixed::getRawBits( void ) const
{
    return (this->_number);
}

void Fixed::setRawBits( int const raw )
{
    this->_number = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_number / (float)(1 << this->_literal));
}
int Fixed::toInt( void ) const
{
    return ((int)this->_number >> this->_literal);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}



