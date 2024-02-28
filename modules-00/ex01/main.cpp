/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:34:25 by fbesson           #+#    #+#             */
/*   Updated: 2024/02/28 11:53:01 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

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

void clear_data(std::string data[5])
{
	int i = 0;
	while (i < 5)
		data[i++] = "";
}


int check_fields(std::string data[5])
{
	if (data[0].empty())
		return (1);
	if (data[1].empty())
		return (1);
	if (data[2].empty())
		return (1);
	if (data[3].empty())
		return (1);
	if (data[4].empty())
		return (1);
	return (0);
}
bool parse_input(std::string data[])
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
	while (check_fields(data))
	{
		std::cout << "Empty field detected, contact discarded [ADD, SEARCH or EXIT]" << std::endl;	
		clear_data(data);
		return (false);
	}
	ft_printf("Contact added. continue with [ADD, SEARCH or EXIT]\n");	
	return (true);
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
			if (parse_input(data) == true)
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
