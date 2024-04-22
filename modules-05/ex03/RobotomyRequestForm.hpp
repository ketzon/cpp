/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:05 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/22 17:18:21 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <unistd.h>
#include <cstddef>
#include <cstdlib>
#include <ctime>

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
		virtual void execute(const Bureaucrat& executor) const;

	private:
		std::string _target;
};
