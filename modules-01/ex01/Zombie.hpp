/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:11:58 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:12:08 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:

	Zombie(std::string name);
	Zombie(std::string name, int i);
	Zombie();
	void getName(std::string name);
	~Zombie();
	void announce( void );

	private:
	std::string name;
	int index;
};

Zombie *zombieHorde(int N, std::string name);

#endif
