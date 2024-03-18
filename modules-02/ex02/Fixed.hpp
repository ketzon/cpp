#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed //Fixed Point Number
{
	public:
		//OCF Orthodox canonic form 
		Fixed();//default constructeur
		~Fixed();//default destructeur
		Fixed(const int nb_int);
		Fixed(const float nb_float);
		Fixed(const Fixed &other); //copy une instance (objet)
		Fixed &operator=(const Fixed &other);//operateur d'affectation
		//operator
		Fixed operator*(const Fixed &mult) const;
		Fixed operator/(const Fixed &divide) const;
		Fixed operator+(const Fixed &plus) const;
		Fixed operator-(const Fixed &minus) const;
		bool operator>(const Fixed &cmp) const;
		bool operator<(const Fixed &cmp) const;
		bool operator>=(const Fixed &cmp) const;
		bool operator<=(const Fixed &cmp) const;
		bool operator==(const Fixed &cmp) const;
		bool operator!=(const Fixed &cmp) const;
		Fixed& operator++();
		Fixed& operator--();
		const Fixed operator++(int);
		const Fixed operator--(int);
		//transform
		float toFloat(void) const;
		int toInt(void) const;
		//static
		static const Fixed& max( const Fixed& a, const Fixed& b);
		static const Fixed& min( const Fixed& a, const Fixed& b);
		static Fixed& min( Fixed& a, Fixed& b);
		static Fixed& max( Fixed& a, Fixed& b);
		//boolean
		//recup
		int getRawBits(void) const;
		int setRawBits(int const raw);

	private:
		int _fpn;
		static const int _nbFracBits;
};
std::ostream& operator<<(std::ostream &os, const Fixed &object);

#endif
