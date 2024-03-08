/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:09:35 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:09:44 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

void  Weapon::setType(std::string type)
{
	_type = type;
}

std::string Weapon::getType(void)
{
	return (_type);
}

