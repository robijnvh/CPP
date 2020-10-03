/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:13:01 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/03 14:08:45 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Thief.hpp"

int     main(void)
{
	// Given main
	// Sorcerer robert("Robert", "the Magnificent");
    // Victim jim("Jimmy");
	// Peon joe("Joe");
	// std::cout << robert << jim << joe;
	// robert.polymorph(jim); robert.polymorph(joe);

	// My main
	Sorcerer zero(void);
    Sorcerer *one = new Sorcerer("Frans", "a Human");
	Sorcerer two("Hans", "an elf");
	
	std::cout << "-----------" << std::endl;	
	Victim *three = new Victim("Piet");
	Victim four("Kees");
	
	std::cout << "-----------" << std::endl;	
	Victim *five = new Peon("Guus");
	Peon six("Karel");
	Thief seven("Jack");
	
	std::cout << "-----------" << std::endl;	
	std::cout << *one << std::endl;
	std::cout << two << std::endl;

	std::cout << "-----------" << std::endl;	
	std::cout << *three << std::endl;
	std::cout << four << std::endl;

	std::cout << "-----------" << std::endl;	
	one->polymorph(*three);
	two.polymorph(four);

	std::cout << "-----------" << std::endl;	
	one->polymorph(*five);
	two.polymorph(six);
	one->polymorph(seven);
	
	std::cout << "-----------" << std::endl;	
	delete one;
	delete three;
	delete five;
    return (0);
} 
