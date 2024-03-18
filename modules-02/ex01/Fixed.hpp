#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed //Fixed Point Number
{
	public:
		Fixed();
		~Fixed();
		Fixed(const int nb_int);
		Fixed(const float nb_float);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		int setRawBits(int const raw);

	private:
		int _fpn;
		static const int _nbFracBits;
};
std::ostream& operator<<(std::ostream &os, const Fixed &object);

#endif
