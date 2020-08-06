/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:13:01 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/08/06 14:17:36 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int     main(void)
{
	// Given main
	// Sorcerer robert("Robert", "the Magnificent");
	// Victim jim("Jimmy");
	// Peon joe("Joe");
	// std::cout << robert << jim << joe;
	// robert.polymorph(jim);
	// robert.polymorph(joe);

	// Sorcerer zero(void);
    Sorcerer *one = new Sorcerer("Frans", "a Human");
	Sorcerer two("Hans", "an elf");
	
	std::cout << "-----------" << std::endl;	
	Victim *three = new Victim("Piet");
	Victim four("Kees");
	
	std::cout << "-----------" << std::endl;	
	Victim *five = new Peon("Guus");
	Peon six("Karel");
	
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
	
	std::cout << "-----------" << std::endl;	
	delete one;
	delete three;
	delete five;
    return (0);
} 
