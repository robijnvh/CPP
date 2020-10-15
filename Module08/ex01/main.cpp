/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 10:51:58 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/15 10:29:52 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main()
{
    Span test = Span(5);

    try {
        test.addNumber(INT_MAX); // check for max int
        test.addNumber(INT_MIN); // check for min int
        test.addNumber(0);
        test.addNumber(7);
        test.addNumber(77);
        test.addNumber(76); // check for full array
        std::cout << "Added different numbers" << std::endl;
        std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        std::cout << "Longest span: " << test.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Array is full..." << std::endl;
    }

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Let's test with way more numbers!" << std::endl;
    Span test2 = Span(12000);
    std::srand(time(NULL));
    std::vector<int> nmbs;
    nmbs.reserve(12000);
    for (int i = 0; i < 12000; i++)
        nmbs.push_back(std::rand() % 12000);
    test2.addNumbers(nmbs.begin(), nmbs.end());
    std::cout << "Shortest span: " << test2.shortestSpan() << std::endl;
    std::cout << "Longest span: " << test2.longestSpan() << std::endl;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Another none!" << std::endl;
    Span test3 = Span(7000);
    std::srand(time(NULL));
    std::vector<int> nmbs2;
    nmbs2.reserve(7000);
    for (int i = 0; i < 7000; i++)
        nmbs2.push_back(std::rand() % 7000);
    test3.addNumbers(nmbs2.begin(), nmbs2.end());
    std::cout << "Shortest span: " << test3.shortestSpan() << std::endl;
    std::cout << "Longest span: " << test3.longestSpan() << std::endl;

    system("leaks ex01 | grep bytes");
    return (0);
}