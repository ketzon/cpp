/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:23:52 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 20:23:56 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl level;

	level.complain("debug");
	level.complain("info");
	level.complain("warning");
	level.complain("error");
	level.complain("random");
	return (0);
}
