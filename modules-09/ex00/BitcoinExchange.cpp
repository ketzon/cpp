/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:42:40 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/29 14:34:11 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() { Bitcoin::parseData();}
Bitcoin::Bitcoin(const Bitcoin& copy) { *this = copy; }
Bitcoin& Bitcoin::operator=(const Bitcoin& ) { return *this;}
Bitcoin::~Bitcoin() { }


void Bitcoin::parseData()
{
	std::ifstream dataFile("data.csv", std::ifstream::in);
	if (dataFile.is_open() == false)
	{
		std::cerr << "error: opening file\n";
		return ;
	}
	std::string line;
	std::string date;
	std::string rate;

	std::getline(dataFile, line);
	while (std::getline(dataFile, line))
    {
        std::istringstream iss(line);
        if (std::getline(iss, date, ',') && std::getline(iss, rate))
            _myMap[date] = atof(rate.c_str());
    }
    dataFile.close();
}

void Bitcoin::bitcoinExchange(const char *input)
{
	std::ifstream file(input);	
	if (file.is_open() == false)
	{
		std::cerr << "error: opening file\n";
		return ;
	}
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) 
	{
        if (line.empty() || line.length() < 12) 
		{
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        size_t div = line.find_first_of(" |");
        std::string date = line.substr(0, div);
        float amount = std::atof(line.substr(line.find('|') + 2).c_str());
        if (checkDate(date) == false) 
            std::cerr << "Error: bad input => " << date << std::endl;
		else if (amount < 0) 
            std::cerr << "Error: not a positive number." << std::endl;
		else if (amount > 1000) 
            std::cerr << "Error: too large a number." << std::endl;
		else 
		{
          	map_it it = _myMap.upper_bound(date);
            if (it == _myMap.begin()) 
			{
                std::cerr << "Error: no price data available for date => " << date << std::endl;
                continue;
            }
            if (it != _myMap.end() && it->first.compare(date) != 0) 
			{
                --it;
            }
            std::cout << date << " => " << amount << " = " << it->second * amount << "\n";
        }
    }
    file.close();
}

bool Bitcoin::checkDate(const std::string& date) 
{
	//-------:0123456789
	//format: 2011-10-10
    if (date.length() != 10) return false;

    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);

    int yearInt = std::atoi(year.c_str());
    int monthInt = std::atoi(month.c_str());
    int dayInt = std::atoi(day.c_str());

    if (yearInt < 0 || yearInt > 2024) return false;
    if (monthInt < 1 || monthInt > 12) return false;
    if (dayInt < 1 || dayInt > 31) return false;

    return true;
}
