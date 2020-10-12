/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:36:25 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/03 14:12:20 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name)
{
	_ap = 40;
	_weapon = NULL;
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character&	Character::operator=(Character const &obj)
{
	_name = obj.getName();
	_ap = obj.getAp();
	_weapon = obj.getWeapon();
    return (*this);
}  

Character::~Character() {}

std::string const&	Character::getName(void) const
{
	return _name;
}

int		Character::getAp(void) const
{
	return _ap;
}

AWeapon*		Character::getWeapon(void) const
{
	return _weapon;
}

void			Character::recoverAP(void)
{
	int amount;

	amount = _ap + 10;
	if (amount > 40)
		_ap = 40;
	else
		_ap += 10;
}

void			Character::equip(AWeapon *w)
{
	_weapon = w;
}

void			Character::attack(Enemy *e)
{
	if (_weapon && (_ap >= _weapon->getAPCost()))
	{
		std::cout << _name << " attacks " << e->getType() << " with a " << _weapon->getName() << std::endl;
		_ap -= _weapon->getAPCost();
		_weapon->attack();
		e->takeDamage(_weapon->getDamage());
		if (e->getHP() == 0)
			delete e;
	}
}

std::ostream &operator << (std::ostream &output, Character const &obj)
{
	if (obj.getWeapon())
		output << obj.getName() << " has "<< obj.getAp() << " AP and wields a "
			<< obj.getWeapon()->getName() << std::endl;
	else
		output << obj.getName() << " has " << obj.getAp() << " AP and is unarmed"
			<< std::endl;
	return output;
}
