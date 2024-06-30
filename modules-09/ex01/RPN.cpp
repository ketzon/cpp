/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:26:08 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/27 17:29:23 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() { }
RPN::~RPN() { }
RPN::RPN(const RPN& copy) { *this = copy; }
RPN& RPN::operator=(const RPN& ) { return *this; };

void RPN::process(char *str)
{
	int i = 0;
	std::string check("0123456789+-*/ ");
	std::string rpn(str);
	while (rpn[i])
	{
		if (check.find(rpn[i]) == std::string::npos)
			throw std::invalid_argument("error argument");
		if (isdigit(rpn[i]))
			_stack.push(atoi(&rpn[i]));
		else if (rpn[i] == '+' || rpn[i] == '-' || rpn[i] == '*' || rpn[i] == '/')
			RPN::operation(rpn[i]);
		i++;
	}
}

void RPN::operation(const char op)
{
	int a,b;
	if (_stack.size() < 2) throw std::length_error("error length");
	a = _stack.top(); _stack.pop();
	b = _stack.top(); _stack.pop();
	switch (op)
	{
		case '+':
			_stack.push(b + a);
			break;
		case '-':
			_stack.push(b - a);
			break;
		case '*':
			_stack.push(b * a);
			break;
		case '/':
			_stack.push(b / a);
			break;
	}
	std::cout << _stack.top() << std::endl;
}
