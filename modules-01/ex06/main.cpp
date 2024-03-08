/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:23:56 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 22:24:15 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cerr << "please enter a level [debug],[info],[warning],[error]" << std::endl;
		return (1);
	}
	Harl level;
	level.complain(av[1]);
	return (0);
}
