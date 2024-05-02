/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:40:09 by fbesson           #+#    #+#             */
/*   Updated: 2024/05/02 15:40:10 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try
	{
		Array<int> A(4);
		Array<int> B;
		std::cout << "A: " << A << "\n";
		std::cout << "B: " << B << "\n";
		std::cout << "change index 2 value in A\n";
		A[2] = 42;
		std::cout << "A: " << A << "\n";
		std::cout << "print value 2 in A" << "\n";
		std::cout << "A: " << A.getElem(2) << "\n";
		std::cout << "Copy array A to array B\n";
		B = A;
		std::cout << "B: " << B << "\n";
		std::cout << "change index 0 value in B\n";
		B[0] = -42;
		std::cout << "A: " << A << "\n";
		std::cout << "B: " << B << "\n";
		std::cout << "trigger throw accessor exception\n";
		A[10] = 1000;
		std::cout << "A: " << A << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

