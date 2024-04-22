/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:13 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/22 17:40:34 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) 
{
  try 
  {
    Bureaucrat bob("bob", 10);
    ShrubberyCreationForm a("home");   // 145, 137
    RobotomyRequestForm b("wall-e");    // 72, 45
    PresidentialPardonForm c("douglas adams");  // 25, 5

	
	std::cout << "\n---Bob---" << std::endl;
	bob.executeForm(a); //throw exception [not signed]

    bob.signForm(a);
    bob.signForm(b);
    bob.signForm(c);

    bob.executeForm(a);
    bob.executeForm(b);
    bob.executeForm(c);  // throw exception [exec grade to low]

	std::cout << "\n---Boss---" << std::endl;
    Bureaucrat boss("big brother", 1);
    boss.executeForm(a);
    boss.executeForm(b);
    boss.executeForm(c);
  } 
  catch (const std::exception& e) 
  {
    std::cout << e.what() << std::endl;
  }
}
