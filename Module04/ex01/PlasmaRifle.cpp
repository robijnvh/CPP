/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:39:52 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 11:18:42 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	_outputAttack = "* piouuu piouuu piouuu *";
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj): AWeapon(obj) {};

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &obj)
{
	AWeapon::operator=(obj);
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void) {};

void			PlasmaRifle::attack(void) const
{
	std::cout << _outputAttack << std::endl;
	return ;
}