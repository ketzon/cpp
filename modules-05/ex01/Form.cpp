#include "Form.hpp"


Form::Form() : _name("default"), _signGrade(150), _execGrade(150)
{
	setStatus(false);	
	checkGrade(_signGrade, _execGrade);
}

Form::Form(std::string name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) 
{
	setStatus(false);	
	checkGrade( _signGrade, _execGrade);
}

void Form::checkGrade(const int signGrade, const int execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || execGrade > 150)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
}

Form::Form(const Form& copy) : _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

Form& Form::operator=(const Form& ref)
{
	const_cast<std::string&>(_name) = ref.getName();	
	_formStatus = ref._formStatus;	
	const_cast<int&>(_signGrade) = ref.getSignGrade();	
	const_cast<int&>(_execGrade) = ref.getExecGrade();	
	return *this;
}

const std::string& Form::getName() const
{
	return _name;
}

bool Form::getFormStatus() const
{
	return _formStatus;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::beSigned(const Bureaucrat& Bureaucrat)
{
	int grade = Bureaucrat.getGrade();	
	if (grade <= 150)
		setStatus(true);
	else
		throw Form::GradeTooLowException();
}

void Form::setStatus(bool status)
{
	_formStatus = status;
}

std::ostream& operator<<(std::ostream& os, const Form& ref)
{
		os << "name: " << ref.getName() << std::endl;
		if (ref.getFormStatus())
		{
			os << "form : " << " signed" << std::endl;
		}
		else
			os << "form : " << " not signed" << std::endl;
		os << "sign grade: " << ref.getSignGrade() << std::endl;
		os << "exec grade: " << ref.getExecGrade() << std::endl;
		return os;
}
