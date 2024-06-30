#pragma once

#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>

#define BEFORE 0
#define AFTER 1


class PmergeMe
{
	public:
	//canonic
	PmergeMe(char **intArray);
	~PmergeMe();
	//personal
	void throwException(std::string str);
	void print(int flag);

	private:
	std::deque<int> deq;
	std::deque<int> vec;

};
