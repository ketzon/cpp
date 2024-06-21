/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:06:45 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/23 14:53:26 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}	

Intern& Intern::operator=(const Intern& ref)
{
	(void)ref;
	return *this;
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *Form = NULL;
	std::string allform[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};	
	for (int i = 0; i < 3; i++)
	{
		if (formName.compare(allform[i]) == 0)
		{
			switch(i)
			{
				case 0:
					Form = new ShrubberyCreationForm(formTarget);
					break;
				case 1:
					Form = new RobotomyRequestForm(formTarget);
					break;
				case 2:
					Form = new PresidentialPardonForm(formTarget);
					break;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return Form;
		}
	}
	std::cout << "Error: Form name doesn't exist" << std::endl;
	return Form;
}
