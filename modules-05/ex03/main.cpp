/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:13 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/23 10:06:39 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) 
{
	Bureaucrat boss("boss", 1);
	AForm *scf, *rrf, *ppr, *wrong;
	Intern intern;
	std::cout << "\n---ShrubberyCreationForm test---" << std::endl;
	scf = intern.makeForm("ShrubberyCreationForm", "Home");
	if (scf)
	{
		boss.signForm(*scf);
		boss.executeForm(*scf);
	}
	std::cout << "\n---RobotomyRequestForm test---" << std::endl;
	rrf = intern.makeForm("RobotomyRequestForm", "WALL-E");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
	}
	std::cout << "\n---PresidentialPardonForm test---" << std::endl;
	ppr = intern.makeForm("PresidentialPardonForm", "Douglas Adams");
	if (ppr)
	{
		boss.signForm(*ppr);
		boss.executeForm(*ppr);
	}
	std::cout << "\n---WrongForm test---" << std::endl;
	wrong = intern.makeForm("wrong name", "wrong target");
	if (wrong)
	{
		boss.signForm(*wrong);
		boss.executeForm(*wrong);
	}
	delete scf;
	delete rrf;
	delete ppr;
	delete wrong;
	return 0;
}
