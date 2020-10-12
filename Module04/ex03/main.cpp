/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:03:41 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 13:54:39 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int	main()
{
	// given main
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// return 0;

	// my main
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	std::cout << "XP: " << tmp->getXP() << std::endl;
	std::cout << "TYPE: " << tmp->getType() << std::endl;
	me->use(1, *bob);
	std::cout << "XP: " << tmp->getXP() << std::endl;
	std::cout << "TYPE: " << tmp->getType() << std::endl;
	me->use(1, *bob);
	std::cout << "XP: " << tmp->getXP() << std::endl;
	std::cout << "TYPE: " << tmp->getType() << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}