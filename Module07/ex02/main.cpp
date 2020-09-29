/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:33:40 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/23 14:50:38 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
// {
// 	Array<int> a(20);

// 	std::cout << "A -> ";
// 	for (int i = 0; i < a.getSize(); i++)
// 		std::cout << a[i] << " ";
// 	std::cout << std::endl;

// 	std::cout << "A -> ";
// 	for (int i = 0; i < a.getSize(); i++)
// 	{
// 		a[i] = static_cast<int>(i);
// 		std::cout << a[i] << " ";
// 	}
// 	std::cout << std::endl;

	// Array<int> b(a);

	// std::cout << "B -> ";
	// for (size_t i = 0; i < b.size(); i++)
	// {
	// 	b[i] = static_cast<int>(i + 1);
	// 	std::cout << b[i] << " ";
	// }
	// std::cout << std::endl;

	// std::cout << "A -> ";
	// for (size_t i = 0; i < a.size(); i++)
	// 	std::cout << a[i] << " ";
	// std::cout << std::endl;

	// Array<int> c;

	// c = b;
	// std::cout << "C -> ";
	// for (size_t i = 0; i < c.size(); i++)
	// {
	// 	c[i]++;
	// 	std::cout << c[i] << " ";
	// }
	// std::cout << std::endl;

	// std::cout << "B -> ";
	// for (size_t i = 0; i < b.size(); i++)
	// 	std::cout << b[i] << " ";
	// std::cout << std::endl;
// }
{
	Array<std::string> str(3);
	std::cout << str.getSize() << std::endl;
	str[0] = "hello";
	str[1] = "there";
	str[2] = "world";
	for (unsigned int i = 0;i < str.getSize();i++)
		std::cout << str[i] << std::endl;

	Array<int> num(5);
	std::cout << num.getSize() << std::endl;
	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	num[3] = 3;
	num[4] = 4;
	try
	{
		for (unsigned int i = 0;i < num.getSize() + 1;i++)
			std::cout << num[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}