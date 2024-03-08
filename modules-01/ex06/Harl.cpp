/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:24:10 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 22:34:01 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "DEBUG CALL" << std::endl;
}

void Harl::info()
{
	std::cout << "INFO CALL" << std::endl;
}

void Harl::warning()
{
	std::cout << "WARNING CALL" << std::endl;
}
void Harl::error()
{
	std::cout << "ERROR CALL" << std::endl;
}

int userIndexChoice(std::string str, std::string levels[])
{
	int i = 0;
	while (i < 4 && levels[i].compare(str) != 0)
	{
		i++;	
	}
	return (i);
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"debug", "info", "warning", "error"};
	int pos = userIndexChoice(level, levels);
	switch (pos)
	{
		case 	0:
			this->debug();
			//fall through
		case 	1:
			this->info();
			//fall through
		case 	2:
			this->warning();
			//fall through
		case 	3:
			this->error();
			break;
		default:
			std::cout  << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

