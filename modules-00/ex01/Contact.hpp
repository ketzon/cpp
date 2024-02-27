/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:34:10 by fbesson           #+#    #+#             */
/*   Updated: 2024/02/27 21:34:34 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact 
{
	public:
		Contact();
		const std::string& get_first_name(void) const;
		const std::string& get_last_name(void) const;
		const std::string& get_nick_name(void) const;
		const std::string& get_phone_number(void) const;
		const std::string& get_darkest_secret(void) const;
		void init_first_name(std::string first_name);
		void init_last_name(std::string last_name);
		void init_nick_name(std::string first_nick_name);
		void init_phone_number(std::string phone_number);
		void init_darkest_secret(std::string darkest_secret);

	private:
		std::string m_first_name;
		std::string m_last_name;
		std::string m_nick_name;
		std::string m_phone_number;
		std::string m_darkest_secret;
};

#endif // PHONEBOOK_HPP 
