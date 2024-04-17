#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default");
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string& s) : AForm("PresidentialPardonForm", 25, 5), _target(s);
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::ShruberryCreationForm(const PresidentialPardonForm& copy)
{
	*this = copy;
}	

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	_target = ref._target;
	return *this;
}
