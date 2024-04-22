/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:02 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/22 17:18:21 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 172, 45), _target("default")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string& s) : AForm("RobotomyRequestForm", 72, 45), _target(s)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 72, 45) 
{
	*this = copy;
}	

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	_target = ref._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkExec(executor);
    std::cout << "Drilling noise!\n";
	srand(time(NULL));
	double random = static_cast<double>(rand()) / RAND_MAX;
	if (random < 0.5)
		std::cout << _target << " has been robotomized successfully" << std::endl; 
	else
		std::cout << "robotomy failed" << std::endl;
}
