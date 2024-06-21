/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:16:08 by fbesson           #+#    #+#             */
/*   Updated: 2024/06/07 18:43:56 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		Span a(100);
		Span b(a);
		Span sp = b;
		std::multiset<int> multiset;
		srand(time(NULL));
		for (int i = 0; i < 20; i++)
			multiset.insert(rand() % 10000);
		sp.addRange(multiset.begin(), multiset.end());
		sp.printSpan();
		std::cout << "shortestSpan: " << sp.shortestSpan() << "\n";
		std::cout << "longestSpan: " << sp.longestSpan() << "\n";
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}
