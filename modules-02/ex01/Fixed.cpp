#include "Fixed.hpp"

const int Fixed::_nbFracBits = 8;

Fixed::Fixed() : _fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb_int)
{
	_fpn = nb_int << _nbFracBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb_float)
{
	_fpn = roundf(nb_float * (1 << _nbFracBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)_fpn / (1 << _nbFracBits));	
}

int Fixed::toInt(void) const
{
	return (_fpn >> _nbFracBits);	
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_fpn);
}

int Fixed::setRawBits(int const raw)
{
	_fpn = raw;	
	return (_fpn);
}

std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
	os << object.toFloat();
	return (os);
}
