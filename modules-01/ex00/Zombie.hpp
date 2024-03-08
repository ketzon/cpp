/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:44:25 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/04 19:44:41 by fbesson          ###   ########.fr       */
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
	Zombie();
	~Zombie();
	void announce( void );


	private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
