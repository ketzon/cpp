/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:07:08 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/22 16:16:04 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : _name("default"), _signGrade(150), _execGrade(150)
{
	setStatus(false);	
	checkGrade(_signGrade, _execGrade);
}

AForm::AForm(std::string name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) 
{
	setStatus(false);	
	checkGrade( _signGrade, _execGrade);
}

void AForm::checkGrade(const int signGrade, const int execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::~AForm()
{
}

AForm::AForm(const AForm& copy) : _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

AForm& AForm::operator=(const AForm& ref)
{
	const_cast<std::string&>(_name) = ref.getName();	
	_formStatus = ref._formStatus;	
	const_cast<int&>(_signGrade) = ref.getSignGrade();	
	const_cast<int&>(_execGrade) = ref.getExecGrade();	
	return *this;
}

const std::string& AForm::getName() const
{
	return _name;
}

bool AForm::getFormStatus() const
{
	return _formStatus;
}

int AForm::getSignGrade() const
{
	return _signGrade;
}

int AForm::getExecGrade() const
{
	return _execGrade;
}

void AForm::beSigned(const Bureaucrat& Bureaucrat)
{
	if (_signGrade < Bureaucrat.getGrade())
		throw  AForm::GradeTooLowException();
	setStatus(true);
}

void AForm::setStatus(bool status)
{
	_formStatus = status;
}

std::ostream& operator<<(std::ostream& os, const AForm& ref)
{
		os << "name: " << ref.getName() << std::endl;
		if (ref.getFormStatus())
		{
			os << "AForm : " << " signed" << std::endl;
		}
		else
			os << "AForm : " << " not signed" << std::endl;
		os << "sign grade: " << ref.getSignGrade() << std::endl;
		os << "exec grade: " << ref.getExecGrade() << std::endl;
		return os;
}

void AForm::checkExec(const Bureaucrat& executor) const
{
	if (getFormStatus() == false)
	{
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > _execGrade)
	{
		throw AForm::GradeTooLowException();
	}
}
