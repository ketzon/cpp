#include "Fixed.hpp"

const int Fixed::_nbFracBits = 8;

void p(const std::string str)
{
	std::cout <<"[instruction] : " << str << std::endl;
}

Fixed::Fixed() : _fpn(0)
{
	/* std::cout << "Default constructor called" << std::endl; */
}

Fixed::Fixed(const int nb_int)
{
	_fpn = nb_int << _nbFracBits;
	/* std::cout << "Int constructor called" << std::endl; */
}

Fixed::Fixed(const float nb_float)
{
	_fpn = roundf(nb_float * (1 << _nbFracBits));
	/* std::cout << "Float constructor called" << std::endl; */
}

Fixed::Fixed(const Fixed &other)
{
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = other;
}

Fixed::~Fixed()
{
	/* std::cout << "Destructor called" << std::endl; */
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
	/* std::cout << "Copy assignment operator called" << std::endl; */
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

//operator

Fixed Fixed::operator*(const Fixed &mult) const
{
	p("mult operator called");
	Fixed temp(this->toFloat() * mult.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed &divide) const
{
	p("divide operator called");
	if (divide._fpn == 0)
	{
		std::cout << "warning : divide zero" << std::endl;
		return (divide);
	}
	Fixed temp(this->toFloat() / divide.toFloat());
	return (temp);
}

Fixed Fixed::operator+(const Fixed &plus) const
{
	p("plus operator called");
	Fixed temp(this->toFloat() + plus.toFloat());
	return (temp);
}

Fixed Fixed::operator-(const Fixed &minus) const
{
	p("minus operator called");
	Fixed temp(this->toFloat() - minus.toFloat());
	return (temp);
}

Fixed& Fixed::operator++() //operation avant int ex: (++i);
{
	p("++(object) operator called");
	_fpn+=1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	p("--(object) operator called");
	_fpn-=1;
	return (*this);
}

const Fixed Fixed::operator++(int) //operation apres int ex: (i++);
{
	p("(object)++ operator called");
	const Fixed temp(this->toFloat());
	_fpn+=1;
	return (temp);
}

const Fixed Fixed::operator--(int)
{
	p("(object)-- operator called");
	const Fixed temp(this->toFloat());
	_fpn=1;
	return (temp);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	p("const max called");
	if (a._fpn > b._fpn)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	p("const min called");
	if (a._fpn < b._fpn)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	p("max called");
	if (a._fpn > b._fpn)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	p("min called");
	if (a._fpn < b._fpn)
		return (a);
	return (b);
}

bool Fixed::operator>(const Fixed &cmp) const
{
	p("> called");
	if (_fpn > cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &cmp) const
{
	p("< called");
	if (_fpn < cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &cmp) const
{
	p(">= called");
	if (_fpn >= cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &cmp) const
{
	p("<= called");
	if (_fpn <= cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &cmp) const
{
	p("== called");
	if (_fpn == cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &cmp) const
{
	p("!= called");
	if (_fpn == cmp.getRawBits())
		return (true);
	return (false);
}
