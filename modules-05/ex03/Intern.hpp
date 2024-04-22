/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:06:49 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/22 21:06:52 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	//canonic
	Intern();
	~Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& ref);
	//personal
	AForm* makeForm(std::string formName, std::string formTarget);

	private:
};
