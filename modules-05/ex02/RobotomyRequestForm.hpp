#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		//canonic
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);

		//personal
		execute(const Bureaucrat& executor) const;

	private:
		std::string _target;
}
