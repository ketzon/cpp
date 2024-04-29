#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cerr << ERR, 1;
	try 
	{
		ScalarConverter::convert(av[1]);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
