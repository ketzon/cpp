/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:42:49 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/26 15:43:07 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

class Bitcoin
{
	public:
	Bitcoin();
	~Bitcoin();
	void parseData();
	void bitcoinExchange(const char* input);
	bool checkDate(const std::string& date);

	private:
	std::map<std::string, float> _myMap;
	typedef std::map<std::string, float>::const_iterator map_it;
	Bitcoin(const Bitcoin& copy);
	Bitcoin& operator=(const Bitcoin& ref);
};
