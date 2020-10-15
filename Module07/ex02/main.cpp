/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 12:31:25 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/02 13:46:22 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> a(20);

	std::cout << "A -> ";
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "A -> ";
	for (int i = 0; i < a.size(); i++)
	{
		a[i] = static_cast<int>(i);
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	Array<int> b(a);

	std::cout << "B -> ";
	for (size_t i = 0; i < b.size(); i++)
	{
		b[i] = static_cast<int>(i + 1);
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;

	Array<int> c(b);
    
	// c = b;
	std::cout << "C -> ";
	for (size_t i = 0; i < c.size(); i++)
	{
		c[i]++;
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;
	return(0);
}