/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:11:55 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:12:08 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::getName(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{	
	name = "default";
	index = 0;
}

Zombie::Zombie(std::string name, int i) : name(name), index(i)
{}
Zombie::~Zombie()
{
	std::cout << "Zombie: " << name << " has been destroyed." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ": Moar brainz!" << std::endl;
}
