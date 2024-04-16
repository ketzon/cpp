/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:13 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/16 12:12:31 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat bob("bob", 50);
	Bureaucrat bryan("bryan", 51);
	Form	psg("psg_contract", 50, 50);
	std::cout << bob << bryan << psg << std::endl;

	try
	{
		Form too_high("highhh", 32, -2);
		std::cout << "no exception in code" << std::endl;
	}
	catch (const std::exception& form)
	{
		std::cout << "Can't create form because " << form.what() << std::endl;
	}
	try
	{
		Form too_low("lowwww", 151, 32);
		std::cout << "no exception in code" << std::endl;
	}
	catch (const std::exception& form)
	{
		std::cout << "Can't create form because " << form.what() << std::endl;
	}
	bob.signForm(psg);
	bryan.signForm(psg);
}

