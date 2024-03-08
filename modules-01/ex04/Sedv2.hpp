/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedv2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:40:45 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 18:40:48 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sedv2
{
	public:

    Sedv2(std::string fileName);
	~Sedv2();
    void replace(std::string toFind, std::string replace);

	private:
	std::string _inFile;
	std::string _outFile;
};
#endif
