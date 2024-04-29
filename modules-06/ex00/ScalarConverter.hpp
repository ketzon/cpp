#pragma once

#define ERR "Programs can take only one literals\n"
#include <exception>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <cfloat>
#include <algorithm>

class ScalarConverter
{
	public:
		//canonic
		~ScalarConverter(void);
		//personal
		static void convert(const std::string str);
		static void printChar(const std::string str);
		static void printInt(const std::string str);
		static void printFloat(const std::string str);
		static void printDouble(const std::string str);
		static int	chara(const std::string str);
		//exception
		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("impossible");
				}
		};
		class EmptyException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("exception: empty input");
				}
		};



	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter &operator=(const ScalarConverter& ref);
};
