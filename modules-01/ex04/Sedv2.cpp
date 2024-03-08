/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedv2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:40:33 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 18:40:35 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedv2.hpp"

Sedv2::Sedv2(std::string fileName) : _inFile(fileName) {
    _outFile = _inFile + ".replace";
}

Sedv2::~Sedv2() 
{
}

void Sedv2::replace(std::string toFind, std::string replace) 
{
    std::ifstream ifs(_inFile.c_str());
    if (!ifs.is_open()) 
	{
        std::cerr << "Error opening input file: " << _inFile << std::endl;
        return;
    }

    std::ofstream ofs(_outFile.c_str());
    if (!ofs.is_open()) 
	{
        std::cerr << "Error opening output file: " << _outFile << std::endl;
        ifs.close();
        return;
    }

    std::string line;
    while (std::getline(ifs, line)) 
	{
        size_t pos = 0;
        while ((pos = line.find(toFind, pos)) != std::string::npos) 
		{
            line.erase(pos, toFind.length());
            line.insert(pos, replace);
            pos += replace.length();
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}

