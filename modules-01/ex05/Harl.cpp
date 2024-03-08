/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:23:41 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 20:23:55 by fbesson          ###   ########.fr       */
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

void Harl::complain(std::string level)
{
    int i = 0;
    t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const char* levels[] = { "debug", "info", "warning", "error"};
    while (i < 4 && levels[i] != level)
        i++;
    if (i < 4)
        (this->*funcs[i])();
	else
		std::cout << "RANDOM CALL" << std::endl;
}

