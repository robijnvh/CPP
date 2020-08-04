/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:36:24 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/04 12:18:50 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = name;
    this->hit_points = 0;
    this->max_hit_points = 0;
    this->energy_points = 0;
    this->max_energy_points = 0;
    this->level = 0;
    this->melee_att_damage = 0;
    this->ranged_att_damage = 0;
    this->armour_damage_red = 0;
    return ;
};

ClapTrap::ClapTrap()
{ 
    std::cout << "ClapTrap Constructor called (no arg), claptrap-22" << std::endl;
	this->_name = "claptrap-22";
    this->hit_points = 0;
    this->max_hit_points = 0;
    this->energy_points = 0;
    this->max_energy_points = 0;
    this->level = 0;
    this->melee_att_damage = 0;
    this->ranged_att_damage = 0;
    this->armour_damage_red = 0;
	return ;
};

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	*this  = clapTrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return ;
};

ClapTrap&   ClapTrap::operator=(ClapTrap const &obj)
{
	this->_name = obj._name;
    this->hit_points = obj.hit_points;
    this->max_hit_points = obj.max_hit_points;
    this->energy_points = obj.energy_points;
    this->max_energy_points = obj.max_energy_points;
    this->level = obj.level;
    this->melee_att_damage = obj.melee_att_damage;
    this->ranged_att_damage = obj.ranged_att_damage;
    this->armour_damage_red = obj.armour_damage_red;
	return (*this);
};

void    ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    if (amount <= armour_damage_red)
        damage = 0;
    else
        damage = amount - armour_damage_red;
    if (damage > hit_points)
    {
        hit_points = 0;
        std::cout << _name << ">> Game over..." << std::endl;
    }
    else
    {
        hit_points -= damage;
        std::cout << _name << ">> That's all?! Try again!" << std::endl;
        std::cout << "Armour reduction: " << armour_damage_red << std::endl;
        std::cout << "Damage: " << damage << std::endl;
        std::cout << "Hit Points: " << hit_points << "|" \
        << max_hit_points << std::endl;
    }
    return ;
};

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points < amount)
    {
        std::cout << _name << ">> Not enough energy..." << std::endl;
    }
    else
    {
        energy_points -= amount;
        hit_points += amount;
        std::cout << _name << ">> Busy repairing..." << std::endl;
        std::cout << "Hit Points: " << hit_points << std::endl;
    }
    std::cout << "Energy Points: " << energy_points << std::endl;
    return ;
};

std::string     ClapTrap::getName()
{
    return (this->_name);
};

unsigned int    ClapTrap::getMeleeAttackDamage()
{
    return (this->melee_att_damage);
};

unsigned int    ClapTrap::getRangedAttackDamage()
{
    return (this->ranged_att_damage);
};

unsigned int    ClapTrap::getArmourDamageReduction()
{
    return (this->armour_damage_red);
};