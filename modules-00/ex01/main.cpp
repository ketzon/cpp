/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:34:25 by fbesson           #+#    #+#             */
/*   Updated: 2024/02/27 21:34:32 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <string>
#include <cctype>

void ft_printf(const char *str)
{
	std::cout << str;
}

bool check_number(std::string &str)
{
	size_t i = 0;
	while (i < str.size())
	{
		if (!std::isdigit(str[i]))
			return (true);
		i++;
	}
	return (false);
}

void parse_input(std::string data[])
{
	ft_printf("Please enter contact data below \n");	
	ft_printf("first name: ");	
	std::getline(std::cin, data[0]);
	ft_printf("last name: ");	
	std::getline(std::cin, data[1]);
	ft_printf("nickname: ");	
	std::getline(std::cin, data[2]);
	ft_printf("phone_number: ");	
	std::getline(std::cin, data[3]);
	while (check_number(data[3]))
	{
		ft_printf("We only accept positive number, no whitespace allowed \n");
		ft_printf("phone_number: ");	
		std::getline(std::cin, data[3]);
	}
	ft_printf("darkest secret: ");	
	std::getline(std::cin, data[4]);
	ft_printf("Contact added. continue with [ADD, SEARCH or EXIT]\n");	
}

int main(void)
{
	PhoneBook book;
	std::string data[5];
	std::string user_input;
	std::string index;
	book.welcome();
	while(1)
	{
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
		{
			parse_input(data);
			book.add_contact(data);
		}
		else if (user_input == "SEARCH")
		{
			book.display_book();
			ft_printf("Choose index for full data: ");
			std::getline(std::cin, index);
			book.display_all_data(index);
		}
		else if (user_input == "EXIT")
			break;
		else
			book.goodbye();
	}
	return (0);
}
