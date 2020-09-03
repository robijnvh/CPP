/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:29:36 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 13:32:21 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) { return ;}

Character::Character(const std::string &name)
{
    this->_name = name;
    this->_index = 0;
    for (int i = 0; i < 4; i += 1)
    {
        this->_inventory[i] = NULL;
    }
    return ;
}

Character::Character(const Character &src)
{
    *this = src;
    return ;
}

Character::~Character(void) { return ;}

Character	&Character::operator= (const Character &obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_index = obj._index;
        for (int i = 0; i < 4; i += 1)
        {
            this->_inventory[i] = NULL;
            this->_inventory[i] = obj._inventory[i]->clone();
        }
    }
    return (*this);
}

const std::string	&Character::getName(void) const
{
    return (this->_name);
}

void	Character::equip(AMateria *m)
{
    if (this->_index < 3)
    {
        this->_inventory[this->_index] = m;
        this->_index += 1;
    }
    return ;
}

void	Character::unequip(int x)
{
    if (x >= 0 && x <= 3)
    {
        this->_inventory[x] = NULL;
    }
    return ;
}

void	Character::use(int x, ICharacter &target)
{
    if (x < this->_index)
    {
        this->_inventory[x]->use(target);
    }
}
