/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:56:32 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/10 18:56:33 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() : std::stack<T>() {}
	virtual ~MutantStack() {}
	MutantStack(const MutantStack<T>& copy) : std::stack<T>(copy) {}
	MutantStack<T>& operator=(const MutantStack<T>& ref)
	{
		if (this != ref)
			std::stack<T>::operator=(ref);			
		return *this;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T>::c.rend(); }
};
