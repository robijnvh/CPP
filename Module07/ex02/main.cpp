/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:33:40 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/22 17:35:56 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
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