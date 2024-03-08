/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:44:14 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/04 20:03:12 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string stack_input;
	std::string heap_input;
	std::cout << "Creating zombie on stack." << std::endl;
	std::cout << "Enter name: " << std::flush;
	std::cin >> stack_input; 
	Zombie stack_zombie(stack_input);
	std::cout << "Creating zombie on heap." << std::endl;
	std::cout << "Enter name: " << std::flush;
	std::cin >> heap_input; 
	Zombie *heap_zombie = newZombie(heap_input);
	heap_zombie -> announce();
	std::cout << "Calling randomChump()." << std::endl;
	randomChump("random_zombie");
	delete heap_zombie;
	return (0);
}
