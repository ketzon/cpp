#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() { }

PmergeMe::PmergeMe(char **intArray)
{
	int i = 1;
	while (intArray[i])
	{
		std::string value = intArray[i];
		if (value.size() == 0) throwException("empty input");
		for (size_t j = 0; j < value.size(); j++)
			if(!isdigit(intArray[i][j])) throwException("not a number");
		long nbr = atol(intArray[i]);
		if (nbr > INT_MAX || nbr < 0) throwException("out of range");
		vec.push_back(static_cast<int>(nbr));
		deq.push_back(static_cast<int>(nbr));
		i++;
	}
}

void PmergeMe::print(int flag)
{
	if (flag == 0) std::cout << "before: ";
	if (flag == 1) std::cout << "after: ";
	std::deque<int>::iterator it = deq.begin();
	while (it < deq.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void PmergeMe::throwException(std::string msg)
{
	deq.clear(); vec.clear();
	msg.insert(0, "error: ");
	throw std::invalid_argument(msg);
}
