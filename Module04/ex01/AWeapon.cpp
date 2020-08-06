/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:25:47 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 15:14:49 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	std::cout << "AWeapon constructor called" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << "AWeapon constructor called (with args)" << std::endl;	
}

AWeapon::AWeapon(const AWeapon &obj)
{
	*this = obj;
}

AWeapon&	AWeapon::operator=(AWeapon const &obj)
{
	// _name = obj._name;
    _apcost= obj._apcost;
	_damage = obj._damage;
    return (*this);
}  

AWeapon::~AWeapon()
{
	std::cout << "AWeapon destructor called" << std::endl;
}

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

// void			AWeapon::attack(void) const
// {
// 	std::cout << "BWHOOOMMM, die je BENT!!" << std::endl;
// 	return ;
// }