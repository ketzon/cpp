/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:53:21 by fbesson           #+#    #+#             */
/*   Updated: 2024/07/03 14:56:12 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <ctime>

#define BEFORE 0
#define AFTER 1

class PmergeMe
{
public:
    PmergeMe(char **argv);
    ~PmergeMe();

    void throwExcep(std::string e);
    void algorithm(void);

    template <typename T>
    void print(int flag, const T& container) const;

    template <typename T>
    void insertionSort(T& container);

    template <typename T>
    void mergeSort(T& container);

private:
	PmergeMe(const PmergeMe&);
	PmergeMe& operator=(const PmergeMe&);
    std::vector<int> vec;
    std::deque<int> deq;
};

#include "PmergeMe.tpp"

#endif // PMERGEME_HPP
