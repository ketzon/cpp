/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:07:12 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/16 12:08:42 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <fstream>
#include <iostream>

class Bureaucrat;

class Form
{
	public:
	//canonic
	Form();
	Form(std::string name, int const signGrade, int const execGrade);
	~Form();
	Form(const Form& copy);
	Form& operator=(const Form& ref);
	//personal
	const std::string& getName() const;
	bool getFormStatus() const;
	int getSignGrade() const;
	int getExecGrade() const;
	void beSigned(const Bureaucrat& Bureaucrat);
	std::string printStatus(bool status);
	void checkGrade(const int signGrade, const int execGrade);
	void setStatus(bool status);
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

	private:

	std::string const _name;
	bool _formStatus;
	int const _signGrade;
	int const _execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& ref);
