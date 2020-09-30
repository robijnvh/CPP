/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 15:26:14 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:39:00 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type) {}

Enemy::Enemy(const Enemy &obj)
{
	*this = obj;
}

Enemy&	Enemy::operator=(Enemy const &obj)
{
    _hp= obj.getHP();
	_type = obj.getType();
    return (*this);
}  

Enemy::~Enemy() {}

std::string const&		Enemy::getType(void) const 
{
	return (_type);
}

int		Enemy::getHP(void) const
{
	return (_hp);
}

void	Enemy::takeDamage(int _dmg)
{
	int amount;

	amount = _hp - _dmg;
	if (amount > 0)
		_hp = _hp - _dmg;
	else
		_hp = 0;
}
