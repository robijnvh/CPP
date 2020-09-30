/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:56:39 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:39:20 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
	_outputAttack = "* pschhh... SBAM! *";
}

PowerFist::PowerFist(const PowerFist &obj): AWeapon(obj) {}

PowerFist&	PowerFist::operator=(PowerFist const &obj)
{
	AWeapon::operator=(obj);
	return (*this);
}

PowerFist::~PowerFist(void) {}

void			PowerFist::attack(void) const
{
	std::cout << _outputAttack << std::endl;
	return ;
}
