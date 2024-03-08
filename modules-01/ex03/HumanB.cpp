/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:09:09 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:09:10 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "\n" << _name << " is created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << " is destroyed" << std::endl;
}

void HumanB::setWeapon( Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (_weapon == NULL)
			std::cout << _name << " attacks without weapon" << std::endl;		
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
