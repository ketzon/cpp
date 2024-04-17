#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 172, 45), _target("default");
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string& s) : AForm("RobotomyRequestForm", 72, 45), _target(s);
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::ShruberryCreationForm(const RobotomyRequestForm& copy)
{
	*this = copy;
}	

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	_target = ref._target;
	return *this;
}
