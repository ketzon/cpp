/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:02:02 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 16:02:11 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min (a, b) = " << ::min( a, b) << std::endl;
	std::cout << "max (a, b) = " << ::max( a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap( c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min (c, d) = " << ::min( c, d) << std::endl;
	std::cout << "max (c, d) = " << ::max( c, d) << std::endl;
	
	return 0;
}
