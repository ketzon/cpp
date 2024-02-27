/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:34:21 by fbesson           #+#    #+#             */
/*   Updated: 2024/02/27 21:34:34 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void ft_printf(const char *str);
bool check_number(std::string &str);

class PhoneBook 
{
	public:
		PhoneBook();
		~PhoneBook();
		Contact contact[8];
		void add_contact(std::string data[5]);
		void display_book(void)  const;
		void display_all_data (std::string index);
		int get_nbr_of_contact(void) const;
		/* void contact_replace(std::string new_contact); */
		void welcome(void) const;
		void goodbye(void) const;
	private:
		int number_of_contact;
		int i;
		
	
};

#endif // PHONEBOOK_HPP 
