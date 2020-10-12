/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:39:21 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/03 14:27:26 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"


int	givenTests(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}

int	myTests(void) 
{
	// ISpaceMarine*	arr[50];
	// Squad*			squadgoals = new Squad(50);
	// for (int i = 0; i < 50; i++) {
	// 	int ret = rand() % 3;
	// 	if (ret == 2)
	// 		arr[i] = new TacticalMarine;
	// 	else if (ret == 1 && i > 0)
	// 		arr[i] = arr[i - 1]->clone();
	// 	else
	// 		arr[i] = new AssaultTerminator;
	// 	squadgoals->push(arr[i]);
	// }
	// for (int i = 0; i < 50; i++) {
	// 	arr[i]->battleCry();
	// }
	// std::cout << "before deleting squadgoals" << std::endl;
	// delete squadgoals; //weeeeeh my squad goals :(
	// std::cout << "before deleting squadgoals" << std::endl;

	// return 0;

	ISpaceMarine* array[21];
	Squad*	bigSquad = new Squad();
	for (int i = 0; i < 21; i++)
	{
		if (i % 2 == 0)
			array[i] = new AssaultTerminator;
		else if (i % 3 == 0)
			array[i] = new TacticalMarine;
		else
			array[i] = array[i - 1]->clone();
		bigSquad->push(array[i]);
	}
	for (int i = 0; i < 21; i++)
	{
		array[i]->battleCry();
	}
	std::cout << "deleting" << std::endl;
	delete bigSquad;
	return (0);
}

int	main( void)
{
	// givenTests();
	myTests();
	// system("leaks a.out");
	return 0;
}
