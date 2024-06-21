#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() { }
Bitcoin::Bitcoin(char *file) : _file(file)  { Bitcoin::parseData();}
Bitcoin::~Bitcoin() { }


void Bitcoin::parseData()
{
	std::ifstream dataFile("data.csv", std::ifstream::in);
	if (dataFile.is_open() == false)
		std::cerr << "error: opening file\n";

	std::string line;
	std::string date;
	std::string rate;

	std::getline(dataFile, line);
	while (std::getline(dataFile, line))
    {
        std::istringstream iss(line);
        if (std::getline(iss, date, ',') && std::getline(iss, rate))
            _myMap[date] = atof(rate.c_str());
    }
    dataFile.close();
}

void Bitcoin::test()
{
    for (std::map<std::string, float>::iterator it = _myMap.begin(); it != _myMap.end(); ++it)
    {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}
