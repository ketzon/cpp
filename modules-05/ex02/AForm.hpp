/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:07:12 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/17 16:57:31 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <fstream>
#include <iostream>

class Bureaucrat;

class AForm
{
	public:
	//canonic
	AForm();
	AForm(std::string name, int const signGrade, int const execGrade);
	~AForm();
	AForm(const AForm& copy);
	AForm& operator=(const AForm& ref);
	//personal
	const std::string& getName() const;
	bool getFormStatus() const;
	int getSignGrade() const;
	int getExecGrade() const;
	void beSigned(const Bureaucrat& Bureaucrat);
	std::string printStatus(bool status);
	void checkGrade(const int signGrade, const int execGrade);
	void setStatus(bool status);
	//ex02
	virtual void execute(Bureaucrat const & executor) const = 0; //pure
	void checkExec(const Bureaucrat& executor) const;
	//exception
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return "Grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return "Grade too low";
		}
	};
	class FormNotSignedException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "Form not signed";
		}
	};

	private:

	std::string const _name;
	bool _formStatus;
	int const _signGrade;
	int const _execGrade;
};

std::ostream& operator<<(std::ostream& os, const AForm& ref);
