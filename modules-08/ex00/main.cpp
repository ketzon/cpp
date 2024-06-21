/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:09:34 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/06 13:10:03 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) 
{
	std::vector<int> vec;
	std::list<int> list;
	std::deque<int> deque;
	std::cout << "container = [1, 2, 3, 4, 5]" << std::endl;
	for (int i = 1; i <= 5; i++)
	{
		vec.push_back(i);	
		list.push_back(i);	
		deque.push_back(i);	
	}
	try 
	{
		std::cout << "vector ";
		easyfind(vec, 1);
		std::cout << "list ";
		easyfind(list, 2);
		std::cout << "deque ";
		easyfind(deque, 3);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}
