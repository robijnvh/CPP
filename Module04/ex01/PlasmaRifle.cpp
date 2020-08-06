/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:39:52 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 15:16:54 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 21, 5)
{
	std::cout << "PlasmaRifle constructor called" << std::endl;
	_outputAttack = "* piouuu piouuu piouuu *";
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj): AWeapon(obj) {};

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &obj)
{
	AWeapon::operator=(obj);
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void)
{
	std::cout << "PlasmaRifle destructor called" << std::endl;	
}

void			PlasmaRifle::attack(void) const
{
	std::cout << _outputAttack << std::endl;
	return ;
}