/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:09:31 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:10:29 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	void attack(void);
	HumanB(std::string name);
	void setWeapon( Weapon &weapon);
	~HumanB();

	private:
	std::string _name;
	Weapon *_weapon;
};

#endif
