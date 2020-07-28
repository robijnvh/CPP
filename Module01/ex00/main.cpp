/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:40:29 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 12:56:58 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony* pony1 = new Pony();
    
	pony1->name = "Joe";
	pony1->color = "brown";
    pony1->age = 2;
	delete pony1;
}

void ponyOnTheStack(void)
{
	Pony pony2;

	pony2.name = "Hey";
	pony2.color = "white";
    pony2.age = 1;
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

// int     main(void)
// {
//     // create object on stack
//     Pony pony1;
//     pony1.color = 'brown';
//     pony1.name = 'joe';

//     // create object on heap
//     Pony *pony2 = new Pony();
//     pony2->color = 'white';
//     pony2->name = 'yo';
//     return (0);
// }