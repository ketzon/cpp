#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		//canonic
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);

		//personal
		execute(const Bureaucrat& executor) const;

	private:
		std::string _target;
}
