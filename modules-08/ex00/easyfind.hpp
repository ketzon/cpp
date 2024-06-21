/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:10:19 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/06 13:10:19 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <iostream>

class cantFind : public std::exception
{
	public:
		const char *what() const throw();
};

template<typename T>
typename T::iterator easyfind(T& container, int nb);

#include "easyfind.tpp"
