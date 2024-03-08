/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:09:17 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:09:44 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _weapon(Weapon)
{
	std::cout << _name << " is created " << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << _name <<" is destroyed" << std::endl;
}

void HumanA::attack(void)
{
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
