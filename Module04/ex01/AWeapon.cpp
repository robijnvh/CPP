/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:25:47 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/03 14:12:11 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(const AWeapon &obj)
{
	*this = obj;
}

AWeapon&	AWeapon::operator=(AWeapon const &obj)
{
	_name = obj._name;
    _apcost= obj._apcost;
	_damage = obj._damage;
    return (*this);
}  

AWeapon::~AWeapon() {}

std::string		AWeapon::getName() const
{
	return _name;
}

int				AWeapon::getAPCost() const
{
	return _apcost;
}

int				AWeapon::getDamage() const
{
	return _damage;
}
