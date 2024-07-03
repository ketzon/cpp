/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:53:14 by fbesson           #+#    #+#             */
/*   Updated: 2024/07/03 15:15:22 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv)
{
    for (size_t i = 1; argv[i]; i++)
    {
        std::string str = argv[i];
        if (str.size() == 0) throwExcep("empty args");
        for (size_t j = 0; j < str.size(); j++)
            if(!isdigit(argv[i][j])) throwExcep("not a number");
        long num = atol(argv[i]);
        if (num > INT_MAX || num < 0) throwExcep("out of range");
        deq.push_back(static_cast<int>(atoi(argv[i])));
        vec.push_back(static_cast<int>(atoi(argv[i])));
    }
	print(BEFORE, vec);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::throwExcep(std::string e)
{
    deq.clear();
    vec.clear();
    throw std::invalid_argument(e.insert(0, "error: "));
}

void PmergeMe::algorithm(void)
{
    double timeVec = 0, timeDeq = 0;
    double startTime = 0, endTime = 0;

    if (vec.size() <= 7) //insertion
    {
        startTime = clock();
        insertionSort(vec);
        endTime = clock();
        timeVec = (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
        print(AFTER, vec);
        std::cout << "Vector sort time: " << timeVec << " ms" << std::endl;

        startTime = clock();
        insertionSort(deq);
        endTime = clock();
        timeDeq = (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
        std::cout << "Deque sort time: " << timeDeq << " ms" << std::endl;
    }
    else //merge
    {
        startTime = clock();
        mergeSort(vec);
        endTime = clock();
        timeVec = (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
        print(AFTER, vec);
        std::cout << "Vector merge time: " << timeVec << " ms" << std::endl;

        startTime = clock();
        mergeSort(deq);
        double endTime = clock();
        timeDeq = (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
        std::cout << "Deque merge time: " << timeDeq << " ms" << std::endl;
    }
}
