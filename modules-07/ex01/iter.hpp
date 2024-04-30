/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:55:34 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 16:55:41 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
void iter(T* array, const int len, void (*func)(const T&))
{
	int i = 0;
	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

template<typename T>
void print(const T& elem)
{
	std::cout << elem << " ";
}
