/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:26:18 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/30 17:00:05 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	try 
	{
		if (ac != 2) throw std::invalid_argument("need args");
		RPN instance;
		instance.process(av[1]);
	}
	catch (std::exception& e)
	{
		return std::cout << e.what() << std::endl, 1;
	}
}
