/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:42 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/16 11:31:04 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	checkGrade(_grade);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	const_cast<std::string&>(_name) = ref.getName();
	_grade = ref.getGrade();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return os;
}

std::string const& Bureaucrat::getName() const
{
	return _name;	
}

int Bureaucrat::getGrade() const
{
	return _grade;	
}

void Bureaucrat::incrementGrade()
{
	this->_grade -= 1;
	checkGrade(_grade);
}

void Bureaucrat::decrementGrade()
{
	this->_grade += 1;
	checkGrade(_grade);
}

void Bureaucrat::checkGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(Form& Form)
{
	try
	{
		Form.beSigned(*this);
		std::cout << getName() + " signed " + Form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << getName() + " couldn't sign " + Form.getName() + " because " + e.what() << std::endl;
	}
}
