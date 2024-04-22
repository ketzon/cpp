/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:17:53 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/22 17:18:21 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string& s) : AForm("PresidentialPardonForm", 25, 5), _target(s)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 25, 5)
{
	*this = copy;
}	

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	_target = ref._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkExec(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
