/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:13 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/11 16:25:05 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try //create bureaucrat in range
	{
		Bureaucrat a("James", 10);
		std::cout << a;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	try //create bureaucrat out of range
	{
		Bureaucrat b("Bob", 151);
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	try //decrement bureaucrat until out of range
	{
		Bureaucrat b("looser", 148);	
		std::cout << b;
		b.decrementGrade(); //149
		std::cout << b;
		b.decrementGrade(); //150
		std::cout << b;
		b.decrementGrade(); //151 //exception return can't go higher
		std::cout << b;
		b.decrementGrade(); //152
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();	
	}
	try //increment bureaucrat until out of range
	{
		Bureaucrat c("winner", 3);	
		std::cout << c;
		c.incrementGrade(); //2
		std::cout << c;
		c.incrementGrade(); //1 
		std::cout << c;
		c.incrementGrade(); //0 //exception return can't go lower
		std::cout << c;
		c.incrementGrade(); //-1
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();	
	}
	return 0;
}
