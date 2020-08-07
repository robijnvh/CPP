/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:58:40 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 12:04:45 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void)
{
	// Given main	
	// Character* me = new Character("me");
	// std::cout << *me;
	// Enemy* b = new RadScorpion();
	// AWeapon* pr = new PlasmaRifle();
	// AWeapon* pf = new PowerFist();
	// me->equip(pr);
	// std::cout << *me;
	// me->equip(pf);
	// me->attack(b);
	// std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;

	// My main
	std::cout << "--------" << std::endl;
	Character* one = new Character("one");
	Character* two = new Character("two");
	std::cout << *one;
	std::cout << *two;
	std::cout << "--------" << std::endl;
	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	std::cout << "--------" << std::endl;	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	// std::cout << "--------" << std::endl;	
	one->equip(pr);
	std::cout << *one;
	std::cout << "--------" << std::endl;	
	two->equip(pf);
	std::cout << *two;
	std::cout << "--------" << std::endl;	
	one->attack(a);
	std::cout << *one;
	std::cout << "--------" << std::endl;	
	two->attack(b);
	std::cout << *two;
	std::cout << "--------" << std::endl;
	Character zero("zero");
	std::cout << zero;
	zero.equip(pf);
	std::cout << zero;
	zero.attack(a);
	zero.attack(a);
	zero.attack(a);
	zero.attack(a);
	// zero.attack(a);
	std::cout << zero;
	std::cout << "--------" << std::endl;
	return 0;
}