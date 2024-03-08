/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:40:51 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 18:40:55 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedv2.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "this program takes three parameters";
		std::cerr << " [filename], [toFind], [replace]" << std::endl;
		return (1);
	}
	else
	{
		Sedv2 sed(av[1]);
		sed.replace(av[2], av[3]);
	}
	return (0);
}

