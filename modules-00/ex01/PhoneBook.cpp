/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:33:55 by fbesson           #+#    #+#             */
/*   Updated: 2024/02/28 11:48:24 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->number_of_contact = 0;
	this->i = 0;
}


PhoneBook::~PhoneBook()
{
}


void PhoneBook::add_contact(std::string data[5])
{
	this->contact[this->i].init_first_name(data[0]);
	this->contact[this->i].init_last_name(data[1]);
	this->contact[this->i].init_nick_name(data[2]);
	this->contact[this->i].init_phone_number(data[3]);
	this->contact[this->i].init_darkest_secret(data[4]);
	this->i = (this->i + 1) % 8;
	if (this->number_of_contact < 8)
		this->number_of_contact++;
}

void print_name(std::string str)
{
	int i = 0;
	int to_start;
	if (str.length() > 10)
	{
		std::cout << str.substr(0,9);
		ft_printf(".");
	}
	else	
	{
		to_start = 10 - str.length();
		while (i++ < to_start)
			ft_printf(" ");
		std::cout << str;
	}
}

int PhoneBook::get_nbr_of_contact(void) const
{
	return (this->number_of_contact);
}

void PhoneBook::display_all_data (std::string index)
{
	bool is_not_number = true;
	int number_index;
	number_index = atoi(index.c_str());
	/* while (check_number(index) == is_not_number) */
	/* { */
	/* 	ft_printf("Index is not a number. Please enter a valid one: \n"); */
	/* 	ft_printf("Choose index for full data: \n"); */
	/* 	std::getline(std::cin, index); */ 
	/* } */
	while (check_number(index) == is_not_number || number_index >= this->number_of_contact || number_index < 0 || index.empty())
	{
		ft_printf("Index out of range. Please enter a valid one: \n");
		ft_printf("Choose index for full data: \n");
		std::getline(std::cin, index); 
		number_index = atoi(index.c_str());
	}
	ft_printf("\nPRIVATE DATA \n");
	ft_printf("first name: ");
	std::cout << this->contact[number_index].get_first_name() << std::endl;
	ft_printf("last name: ");
	std::cout << this->contact[number_index].get_last_name() << std::endl;
	ft_printf("nick name: ");
	std::cout << this->contact[number_index].get_nick_name() << std::endl;
	ft_printf("phone number: ");
	std::cout << this->contact[number_index].get_phone_number() << std::endl;
	ft_printf("darkest secret: ");
	std::cout << this->contact[number_index].get_darkest_secret() << std::endl;
	std::cout << "\nFor new command enter [ ADD, SEARCH, EXIT]\n";
}
void PhoneBook::display_book(void) const
{
	int i = 0;
	std::cout << "|     index|first name| last name| nick name|\n";
	while (i < this->number_of_contact)
	{
		ft_printf("|         ");
		std::cout << i;
		ft_printf("|");
		print_name(this->contact[i].get_first_name());
		ft_printf("|");
		print_name(this->contact[i].get_last_name());
		ft_printf("|");
		print_name(this->contact[i].get_nick_name());
		ft_printf("|");
		std::cout << std::endl;
		i++;
	}
}

void PhoneBook::welcome(void) const
{
	std::cout << "Use the PhoneBook with [ADD, SEARCH or EXIT]" << std::endl;
}

void PhoneBook::goodbye(void) const
{
	std::cout << "Wrong arg please enter the right command [ADD, SEARCH, EXIT]" << std::endl;
}
