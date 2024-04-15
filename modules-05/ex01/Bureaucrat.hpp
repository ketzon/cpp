/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:25 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/13 13:44:16 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		//canonic
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& ref);

		//personal
		std::string const& getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void checkGrade(int grade);
		void signForm(Form& Form);

		//exception
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is < 1\n";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is > 150\n";
				}
		};
	private:
		std::string const _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref);
