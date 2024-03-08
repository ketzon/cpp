/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:09:24 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:09:44 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA();
	void attack(void);

	private:
	std::string _name;
	Weapon &_weapon;
};

#endif
