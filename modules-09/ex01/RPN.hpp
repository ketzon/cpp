/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:26:14 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/27 17:26:15 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cstdlib>
#include <exception>

class RPN
{
	public:
		RPN();
		~RPN();
		void process(char *rpn);
		void operation(const char op);

	private:
		std::stack<int> _stack;
		RPN(const RPN& copy);
		RPN& operator=(const RPN& ref);

};
