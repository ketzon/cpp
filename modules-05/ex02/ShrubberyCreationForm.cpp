#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& s) : AForm("ShrubberyCreationForm", 145, 137), _target(s)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = copy;
}	

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	_target = ref._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkExec(executor);
	std::fstream file((_target + "_shrubbery").c_str(), std::fstream::out | std::fstream::trunc);
	if (!file.is_open())
	{
		std::perror("Error: opening file");
		return;
	}
	file.open(file);
	file << "   |    " << std::endl;
	file << "  |||   " << std::endl;
	file << " |_|_|  " << std::endl;
	file << "|__|__| " << std::endl;
	file << "  |o|   " << std::endl;
	file.close();
}
