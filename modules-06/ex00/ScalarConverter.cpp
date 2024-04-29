/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:57:30 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/29 17:54:59 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::~ScalarConverter(void){}

void printSpecial(std::string str)
{
	if (str == "+inff" || str == "+inf")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
	}
	if (str == "inff" || str == "inf")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: inff\n";
		std::cout << "double: inf\n";
	}
	if (str == "-inff" || str == "-inf")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
	}
	if (str == "nanf" || str == "nan")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	}
}

void ScalarConverter::convert(const std::string str)
{
	if (str.size() == 0)
		throw ScalarConverter::EmptyException();
	if (str == "+inff" || str == "inff" || str == "-inff" || str == "+inf" || str == "inf" || str == "-inf" || str == "nanf" || str == "nan")
		return printSpecial(str), void();
	ScalarConverter::printChar(str);
	ScalarConverter::printInt(str);
	ScalarConverter::printFloat(str);
	ScalarConverter::printDouble(str);
}

void ScalarConverter::printChar(std::string str)
{
	try 
	{
	std::cout << "char: ";
	if (str.size() == 1 && !std::isdigit(str[0]) && std::isprint(str[0]))
		std::cout << "'" << static_cast<char>(str[0]) << "'\n";
	else 
	{
		int intValue = static_cast<int>(std::atoi(str.c_str()));
		if (intValue > 127 || intValue < 0)
			throw ScalarConverter::ImpossibleException();
		if (std::isprint(static_cast<char>(intValue)))
			std::cout << "'" << static_cast<char>(intValue) << "'\n";
		else
			std::cerr << "Non displayable\n";
	}
	}
	catch (const ScalarConverter::ImpossibleException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void ScalarConverter::printInt(std::string str)
{
	try 
	{
	std::cout << "int: ";
	long long intValue = static_cast<long long>(atoll(str.c_str()));
	if (intValue > INT_MAX || intValue < INT_MIN || chara(str))
		throw ScalarConverter::ImpossibleException();
	std::cout << static_cast<int>(intValue) << "\n";
	}
	catch (const ScalarConverter::ImpossibleException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void ScalarConverter::printFloat(std::string str)
{
    try
    {
        std::cout << "float: ";
        float floatValue = 0.0f;
        if (str[0] == '-')
        {
            floatValue = static_cast<float>(-std::strtof(str.substr(1).c_str(), NULL));
        }
        else
        {
            floatValue = static_cast<float>(std::strtof(str.c_str(), NULL));
        }
        if (floatValue > FLT_MAX || floatValue < -FLT_MAX || chara(str))
            throw ScalarConverter::ImpossibleException();
        std::cout << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
    }
    catch (const ScalarConverter::ImpossibleException& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConverter::printDouble(std::string str)
{
    try
    {
        std::cout << "double: ";
        double doubleValue = 0.0;
        if (str[0] == '-')
        {
            doubleValue = static_cast<double>(-std::strtod(str.substr(1).c_str(), NULL));
        }
        else
        {
            doubleValue = static_cast<double>(std::strtod(str.c_str(), NULL));
        }
        if (doubleValue > DBL_MAX || doubleValue < -DBL_MAX || chara(str))
            throw ScalarConverter::ImpossibleException();
        std::cout << std::fixed << std::setprecision(1) << doubleValue << std::endl;
    }
    catch (const ScalarConverter::ImpossibleException& e)
    {
        std::cout << e.what() << std::endl;
    }
}

int ScalarConverter::chara(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.' && str[i] != '-' && str[i] != '+')
			return 1;	
	}
	return 0;
}
