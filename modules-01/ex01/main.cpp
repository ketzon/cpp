/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:12:01 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/06 20:12:08 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 5

int main(void)
{
	Zombie *horde = zombieHorde(N, "111");
	for(int i = 0; i < N; i++)
		horde[i].announce();
	return (delete[] horde, 0);
}
