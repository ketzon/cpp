/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:41:03 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/05 15:09:20 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string origin;

	origin.assign("HI THIS IS BRAIN");
	std::string *stringPTR = &origin;
	std::string &stringREF = origin;

	std::cout << "\naddress of origin: " << &origin << std::endl;
	std::cout << "address stringPTR: " << stringPTR << std::endl;
	std::cout << "address of stringREF: " << &stringREF << std::endl;

	std::cout << "\nvalue of origin: " << origin << std::endl;
	std::cout << "value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;
	stringREF = "HI THIS IS STRANGE";
	std::cout << "[bonus] swap value origin: " << origin << std::endl;
	return (0);
}

