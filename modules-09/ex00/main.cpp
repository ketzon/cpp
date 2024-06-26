/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:43:00 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/29 14:33:45 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **file)
{
	if (ac != 2) return std::cerr << "error: file\n", 1;
	Bitcoin btc;
	btc.bitcoinExchange(file[1]);
}
