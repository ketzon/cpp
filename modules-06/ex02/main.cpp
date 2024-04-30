/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:41:48 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 13:41:58 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base* generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	Base* base = NULL;
	switch(i)
	{
		case 0:
			base = new A;
			std::cout << "Base pointing on A\n";	
			break;
		case 1: 
			base = new B;
			std::cout << "Base pointing on B\n";	
			break;
		case 2:
			base = new C;
			std::cout << "Base pointing on C\n";	
			break;
	}
	return base;
	
}

void identify(Base *p)
{
	A *checkA = dynamic_cast<A*>(p);
	B *checkB = dynamic_cast<B*>(p);
	C *checkC = dynamic_cast<C*>(p);

	if (checkA)
		std::cout << "[ptr] dynamic_cast identified on A\n";
	if (checkB)
		std::cout << "[ptr] dynamic_cast identified on B\n";
	if (checkC)
		std::cout << "[ptr] dynamic_cast identified on C\n";
}

void identify(Base& p)
{
	try 
	{
		dynamic_cast<A&>(p);
		std::cout << "[ref] dynamic_cast identified on A\n";
		return ;
	}
	catch (...) {}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "[ref] dynamic_cast identified on B\n";
		return ;
	}
	catch (...) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "[ref] dynamic_cast identified on C\n";
		return ;
	}
	catch (...) {}
}

int main(void)
{
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}
