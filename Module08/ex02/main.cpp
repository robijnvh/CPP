/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 12:24:14 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/14 12:44:18 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int given_main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

template class MutantStack<int>;
int my_main(void)
{
    MutantStack<int> test;
    test.push(10);
    test.push(20);
    test.push(30);
    test.push(40);
    test.push(50);
    test.push(60);
    {
	    std::cout << "Iterator:\n";
		MutantStack<int>::iterator it = test.begin();
		for (; it != test.end(); ++it) {
			std::cout << *it << std::endl;
		}
		std::cout << "Const iterator:\n";
		MutantStack<int>::const_iterator cit = test.begin();
		for (; cit != test.end(); ++cit) {
			std::cout << *cit << std::endl;
		}
	}
	{
		std::cout << "Reverse iterator:\n";
		MutantStack<int>::reverse_iterator rit = test.rev_begin();
		for (; rit != test.rev_end(); ++rit) {
			std::cout << *rit << std::endl;
		}
		std::cout << "Reverse const iterator:\n";
		MutantStack<int>::const_reverse_iterator rcit = test.rev_begin();
		for (; rcit != test.rev_end(); ++rcit) {
			std::cout << *rcit << std::endl;
		}
	}

    std::cout << "-----------------" << std::endl;
    std::cout << "Some extra tests!" << std::endl;
    std::cout << "-----------------" << std::endl;
    
    MutantStack<float> test2;
    test2.push(13.4);
    test2.push(7.7);
    test2.push(1.0);
    test2.push(4);
    test2.push(896.8);
    test2.push(99.4);
    {
	    std::cout << "Iterator:\n";
		MutantStack<float>::iterator it = test2.begin();
		for (; it != test2.end(); ++it) {
			std::cout << *it << std::endl;
		}
		std::cout << "Const iterator:\n";
		MutantStack<float>::const_iterator cit = test2.begin();
		for (; cit != test2.end(); ++cit) {
			std::cout << *cit << std::endl;
		}
	}
	{
		std::cout << "Reverse iterator:\n";
		MutantStack<float>::reverse_iterator rit = test2.rev_begin();
		for (; rit != test2.rev_end(); ++rit) {
			std::cout << *rit << std::endl;
		}
		std::cout << "Reverse const iterator:\n";
		MutantStack<float>::const_reverse_iterator rcit = test2.rev_begin();
		for (; rcit != test2.rev_end(); ++rcit) {
			std::cout << *rcit << std::endl;
		}
	}
    
    return (0);
}

int main(void)
{
    // given_main();
    my_main();
    return (0);
}
