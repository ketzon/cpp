/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:16:16 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/07 18:44:03 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <set>
#include <ctime>
#include <string>

typedef std::multiset<int>::iterator t_it;

class Span
{
	public:
		//canonic
		Span(unsigned int n);
		Span(const Span& copy);
		Span& operator=(const Span& ref);
		~Span();
		//personal
		void addNumber(int nb);
		void addRange(t_it begin, t_it end);
		void printSpan(void);
		int shortestSpan(void);
		int longestSpan(void);


	private:
		Span();
		std::multiset<int> _multiset;
		unsigned int _n;

};
