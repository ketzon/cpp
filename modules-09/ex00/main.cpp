#include "BitcoinExchange.hpp"

int main(int ac, char **file)
{
	if (ac != 2)
		return std::cerr << "error: program need file as argument\n", 1;
	Bitcoin btc = Bitcoin(file[1]);
	btc.test();
}
