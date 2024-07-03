/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:53:33 by fbesson           #+#    #+#             */
/*   Updated: 2024/07/03 15:14:53 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac < 2) throw std::invalid_argument("Usage ./a.out [int] ...");
		PmergeMe container(av);
		container.algorithm();
	}
	catch (std::exception& e)
	{
		return std::cout << e.what() << std::endl, 1;
	}
}
