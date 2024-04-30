/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:02:06 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 16:02:11 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T& a, const T& b)
{
	if (a > b)
		return b;
	else
		return a;
}

template<typename T>
T max(const T& a, const T& b)
{
	if (a > b)
		return a;
	else 
		return b;
}
