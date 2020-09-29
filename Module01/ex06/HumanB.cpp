/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:35:58 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:12:22 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}

HumanB::HumanB(void) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon& w)
{
	this->_weapon = &w;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
