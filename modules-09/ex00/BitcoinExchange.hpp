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
	Bitcoin(char *file);
	~Bitcoin();
	void parseData();
	void test();

	private:
	char *_file;
	std::map<std::string, float> _myMap;
};
