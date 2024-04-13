#include "Form.hpp"


Form::Form() : _name("default"), _signGrade(150), _execGrade(150)
{
	_formStatus = setStatus(false);	
}

Form::From(std::string name, int const signGrade, int const execGrade) : _name(name), , _signGrade(signGrade), _execGrade(execGrade) 
{
	_formStatus = setStatus(false);	
	checkGrade();
}

Form::~Form()
{
}

Form::Form(const Form& copy)
{
	*this = copy;
}

Form& Form::operator=(const Form& ref)
{
	_name = ref.getName();	
	_signed = ref.getSigned();	
	_signGrade = ref.getSignGrade();	
	_execGrade = ref.getExecGrade();	
	return *this;
}

std::string Form::getName()
{
	return _name;
}

bool Form::getFormStatus()
{
	return _status;
}

int const Form::getSignGrade()
{
	return _signed;
}

int const Form::getExecGrade()
{
	return _execGrade;
}

void Form::beSigned(const Bureaucrat& Bureaucrat)
{
	int grade = Bureaucrat.getGrade();	
	if (grade 
}

void Form::setStatus(bool status)
{
	_formStatus = satus;
}
