/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:15:59 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/07 18:29:11 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) :  _n(n) {} 

Span::~Span() {} 

Span::Span(const Span& copy)
{
	*this = copy;
}

Span& Span::operator=(const Span& ref)
{
	if (this != &ref)
	{
		this->_n = ref._n;
		this->_multiset = ref._multiset;
	}
	return *this;
}

void Span::addRange(t_it begin, t_it end)
{
	if (_multiset.size() + std::distance(begin, end) > _n)
		throw std::out_of_range("multiset: don't have enough place");
	_multiset.insert(begin, end);
}

void Span::addNumber(int number)
{
	if (_multiset.size() == _n)
		throw std::out_of_range("multiset: already full");
	_multiset.insert(number);
}

void Span::printSpan(void)
{
	for (t_it it = _multiset.begin(); it != _multiset.end(); it++)
		std::cout << "[" << *it << "] "; 
	std::cout << std::endl;
}

int Span::shortestSpan(void)
{
	if (_multiset.size() < 2)
		throw std::length_error("multiset: need 2 value"); 
	int shortest = -1;
	for (t_it lhs = _multiset.begin(); lhs != --_multiset.end(); lhs++) 
	{
		t_it rhs = lhs;
		rhs++;
		if (*rhs - *lhs < shortest || shortest == -1)
			shortest = *rhs - *lhs;
	}
	return shortest;
}

int Span::longestSpan(void)
{
	if (_multiset.size() < 2)
		throw std::length_error("multiset: need 2 value"); 
	return (*(--_multiset.end()) - *(_multiset.begin()));
}
