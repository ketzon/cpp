/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:55:30 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 16:55:31 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	const char *str = "hello";	
	const std::string string_arr[] = {"one", "two", "three", "four"};
	const int arr[] = { 42, 12, 34 };
	const float float_arr[] = { 1.1, 2.2, 3.3, 4.4};
	const double double_arr[] = { -1.1, -2.2, -3.3, -4.4};

	::iter(str, 5, print);
	std::cout << std::endl;

	::iter(string_arr, 4, print);
	std::cout << std::endl;

	::iter(arr, 3, print);
	std::cout << std::endl;

	::iter(float_arr, 4, print);
	std::cout << std::endl;

	::iter(double_arr, 4, print);
	std::cout << std::endl;
	return 0;
}
