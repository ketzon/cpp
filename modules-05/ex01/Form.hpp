#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <fstream>
#include <iostream>

class Form
{
	public:
	//canonic
	Form();
	Form(std::string name, bool formStatus, int const signGrade, int const execGrade);
	~Form();
	Form(const Form& copy);
	Form& operator=(const Form& ref);
	//personal
	std::string getName();
	bool getFormStatus();
	int const getSignGrade();
	int const getExecGrade();
	void beSigned(const Bureaucrat& Bureaucrat);
	void checkGrade();
	void setStatus(bool status);
	//exception
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return "Grade too high";
		}
	}
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return "Grade too low";
		}
	}

	private:

	std::string const _name;
	bool _formStatus;
	int const _signGrade;
	int const _execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& ref);
