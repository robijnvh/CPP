/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:36:24 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/03 12:31:31 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = name;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->melee_att_damage = 30;
    this->ranged_att_damage = 20;
    this->armour_damage_red = 5;
    return ;
};

ClapTrap::ClapTrap()
{ 
    std::cout << "ClapTrap Constructor called (no arg)" << std::endl;
	return ;
};

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

void    ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "CLAP-TP " << this->_name << " attacks " << target \
              << " with melee, causing " << this->melee_att_damage \
              << " points of damage !" << std::endl;
    return ;
};

void    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout   << "CLAP-TP " << this->_name << " attacks " << target \
                << " at range, causing " << this->ranged_att_damage \
                << " points of damage !" << std::endl;
    return ;
};

void    ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    if (amount <= this->armour_damage_red)
        damage = 0;
    else
        damage = amount - this->armour_damage_red;
    if (damage > this->hit_points)
    {
        this->hit_points = 0;
        std::cout << this->_name << ">> Game over..." << std::endl;
    }
    else
    {
        this->hit_points -= damage;
        std::cout << this->_name << ">> That's all?! Try again!" << std::endl;
        std::cout << "Armour reduction: " << this->armour_damage_red << std::endl;
        std::cout << "Damage: " << damage << std::endl;
        std::cout << "Hit Points: " << this->hit_points << "|" \
        << this->max_hit_points << std::endl;
    }
    return ;
};

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points < amount)
    {
        std::cout << this->_name << ">> Not enough energy..." << std::endl;
    }
    else
    {
        this->energy_points -= amount;
        this->hit_points += amount;
        std::cout << this->_name << ">> Busy repairing..." << std::endl;
        std::cout << "Hit Points: " << this->hit_points << std::endl;
    }
    std::cout << "Energy Points: " << this->energy_points << std::endl;
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