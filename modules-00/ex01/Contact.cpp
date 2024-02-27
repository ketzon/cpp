/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:34:04 by fbesson           #+#    #+#             */
/*   Updated: 2024/02/27 21:34:34 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

const std::string&  Contact::get_first_name() const
{
	return (this->m_first_name);
}

const std::string&  Contact::get_last_name() const
{
	return (this->m_last_name);
}

const std::string&  Contact::get_nick_name() const
{
	return (this->m_nick_name);
}

const std::string& Contact::get_phone_number() const
{
	return (this->m_phone_number);
}

const std::string&  Contact::get_darkest_secret() const
{
	return (this->m_darkest_secret);
}

void Contact::init_first_name(std::string first_name)
{
	this->m_first_name = first_name;
}

void Contact::init_last_name(std::string last_name)
{
	this->m_last_name = last_name;
}

void Contact::init_nick_name(std::string nick_name)
{
	this->m_nick_name = nick_name;
}

void Contact::init_phone_number(std::string phone_number)
{
	this->m_phone_number = phone_number;
}

void Contact::init_darkest_secret(std::string darkest_secret)
{
	this->m_darkest_secret = darkest_secret;
}
