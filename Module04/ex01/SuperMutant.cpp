/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:22:15 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/08/07 10:33:18 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &obj): Enemy(obj)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
};

SuperMutant&	SuperMutant::operator=(SuperMutant const &obj)
{
	Enemy::operator=(obj);
	return (*this);
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;	
}

void	SuperMutant::takeDamage(int _dmg)
{
	int amount;

	_dmg -= 3;
	amount = _hp - _dmg;
	if (amount > 0)
		_hp = _hp - _dmg;
	else
		_hp = 0;
}