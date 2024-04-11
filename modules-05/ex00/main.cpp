/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:37:13 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/11 14:37:14 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a("James", 0);
	Bureaucrat b("Bob", 300);
	Bureaucrat c("Bryan", 50);
	Bureaucrat d;
	Bureaucrat e("Lime", 100);
	Bureaucrat f("Steve", 150);
	e = a;
	e.incrementGrade();
	f.decrementGrade();
	std::cout << a
			  << b
			  << c
			  << d
			  << e
			  << f;
	return 0;
}
