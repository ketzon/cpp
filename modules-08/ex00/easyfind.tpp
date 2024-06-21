#include "easyfind.hpp"

const char * cantFind::what() const throw()
{
	return "can't find value";
}

template<typename T>
typename T::iterator easyfind(T& container, int nb)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw cantFind();
	std::cout << "container have : " << *it << std::endl;
	return it;
}

