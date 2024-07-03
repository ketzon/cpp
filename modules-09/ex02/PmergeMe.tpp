#ifndef PMERGEME_TPP
#define PMERGEME_TPP

template <typename T>
void PmergeMe::insertionSort(T& container)
{
    size_t i = 1;
    while (i < container.size())
    {
        size_t j = i;
        while (j > 0 && container[j - 1] > container[j])
        {
            std::swap(container[j - 1], container[j]);
            --j;
        }
        ++i;
    }
}

template <typename T>
void PmergeMe::print(int flag, const T& container) const
{
    if (flag == BEFORE) std::cout << "before: ";
    if (flag == AFTER) std::cout << "after: ";
    for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void PmergeMe::mergeSort(T& container) //5 3 9 10 8 49 1 12
{
    if (container.size() <= 1)
        return;

    size_t mid = container.size() / 2;
    typename T::iterator midIter = container.begin() + mid;

    T leftHalf(container.begin(), midIter);
    T rightHalf(midIter, container.end());

    mergeSort(leftHalf);
    mergeSort(rightHalf);

    container.clear();
    typename T::iterator leftIter = leftHalf.begin();
    typename T::iterator rightIter = rightHalf.begin();

    while (leftIter != leftHalf.end() && rightIter != rightHalf.end()) {
        if (*leftIter < *rightIter)
            container.push_back(*leftIter++);
        else
            container.push_back(*rightIter++);
    }

    while (leftIter != leftHalf.end())
        container.push_back(*leftIter++);

    while (rightIter != rightHalf.end())
        container.push_back(*rightIter++);
}

#endif // PMERGEME_TPP
