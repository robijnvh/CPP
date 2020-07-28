/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 10:40:29 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/07/28 13:23:15 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *pony1 = new Pony("Joe", "brown", "2");
    std::cout << "Hi! My name is " << pony1->giveName() << ".\n";
	std::cout << "I'm the " << pony1->giveColor() << " pony on the heap.\n";
	std::cout << "I'm " << pony1->giveAge() << " years old.\n";
	delete pony1;
}

void ponyOnTheStack(void)
{
	Pony pony2("Jess", "white", "7");
    std::cout << "Hi! My name is " << pony2.giveName() << ".\n";
	std::cout << "I'm the " << pony2.giveColor() << " pony on the stack.\n";
	std::cout << "I'm " << pony2.giveAge() << " years old.\n";
	return;
}

int main(void)
{
    //heap
	std::cout << "ponyOnTheHeap:" << std::endl;
	ponyOnTheHeap();
    //stack
	std::cout << std::endl << "ponyOnTheStack:" << std::endl;
	ponyOnTheStack();
    return (0);
}
