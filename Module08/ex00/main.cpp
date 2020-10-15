/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:07:59 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/10/13 10:51:07 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	// Vector tests
	std::vector<int> vector;
	std::cout << "Empty vector test" << std::endl;
	try
	{
		std::cout << *easyfind(vector, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found..." << std::endl;
	}
	std::cout << "Vector test, added 7, 77" << std::endl;
	vector.push_back(7);
	vector.push_back(77);
	try
	{
		std::cout << "Found: " << *easyfind(vector, 7) << std::endl;
		std::cout << "Found: " << *easyfind(vector, 77) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found..." << std::endl;
	}
	std::cout << "Extra test, (-1)" << std::endl;
	try
	{
		std::cout << *easyfind(vector, -1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found..." << std::endl;
	}

    std::cout << "-----------------------------------" << std::endl;
    
	// Stack tests
	std::list<int> list;
	std::cout << "Stack: Empty test" << std::endl;
	try
	{
		std::cout << *easyfind(list, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found..." << std::endl;
	}
	std::cout << "Stack test, added 7, 77" << std::endl;
	list.push_back(7);
	list.push_back(77);
	try
	{
		std::cout << "Found: " << *easyfind(list, 7) << std::endl;
		std::cout << "Found: " << *easyfind(list, 77) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found..." << std::endl;
	}
	std::cout << "Extra test, (-1)" << std::endl;
	try
	{
		std::cout << *easyfind(list, -1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found..." << std::endl;
	}
    return (0);
}