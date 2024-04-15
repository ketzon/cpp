/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:13 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/15 21:40:51 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a("Bob", 100);
	try
	{
		Form z("Contrat Vitality", 150, 150);
		a.signForm(z);
	}
	catch (std::exception &e)
	{
		std::cout << "You don't have access to Vitality contract" << std::endl;
	}
	return 0;
}
