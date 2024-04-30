/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:41:56 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 13:42:03 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ctime>
#include <cstdlib>
#include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
