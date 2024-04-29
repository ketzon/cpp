#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return std::cerr << ERR, 1;
	ScalarConverter::convert(av[1]);
}
