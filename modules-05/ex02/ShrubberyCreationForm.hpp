#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		//canonic
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);

		//personal
		void execute(const Bureaucrat& executor) const;
		

	private:
		std::string _target;
};
