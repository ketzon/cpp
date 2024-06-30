#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac < 2) throw std::invalid_argument("Usage ./a.out [int] ...");
		PmergeMe container(av);
		container.print(BEFORE);
		//je tri avec merge-insert ici 
		container.print(AFTER);

	}
	catch (std::exception& e)
	{
		return std::cout << e.what() << std::endl, 1;
	}
}
