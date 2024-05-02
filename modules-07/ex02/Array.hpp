#pragma once

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		//canonic
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array& operator=(const Array& ref);
		~Array();
		//personal
		T& operator[](unsigned int i) const;
		T getElem(unsigned int i) const;
		unsigned int getSize(void) const;
		//exception
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Out of bounds");
				}
		};
		private:
			T* _array;
			unsigned int _size;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& ref)
{
	os << "[";
	for (unsigned int i = 0; i < ref.getSize(); i++)
	{
		os << ref.getElem(i);
		if (i  < ref.getSize() - 1)
			os << ", ";
	}
	os << "]";
	return os;
}

#include "Array.tpp"
