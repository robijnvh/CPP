/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:38:06 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/08/04 12:11:24 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Hi! I'm ScavTrap " << name << "!" << std::endl;
    this->_name = name;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 50;
    this->max_energy_points = 50;
    this->level = 1;
    this->melee_att_damage = 20;
    this->ranged_att_damage = 15;
    this->armour_damage_red = 3;
    return ;
};

ScavTrap::ScavTrap()
{ 
    std::cout << "Creating ScavTrap... Jo-88" << std::endl;
	this->_name = "Jo-88";
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 50;
    this->max_energy_points = 50;
    this->level = 1;
    this->melee_att_damage = 20;
    this->ranged_att_damage = 15;
    this->armour_damage_red = 3;
};

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	*this  = scavTrap;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->_name << " has excited the game..." << std::endl;
};

ScavTrap&   ScavTrap::operator=(ScavTrap const &obj)
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

void    ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SCAV-TP " << this->_name << " attacks " << target \
              << " with melee, causing " << this->melee_att_damage \
              << " points of EXTREME damage !" << std::endl;
    return ;
};

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout   << "SCAV-TP " << this->_name << " attacks " << target \
                << " at range, causing " << this->ranged_att_damage \
                << " points of EXTREME damage !" << std::endl;
    return ;
};

void    ScavTrap::takeDamage(unsigned int amount)
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
        std::cout << _name << " >> That's all?! Try again!" << std::endl;
        std::cout << "Armour reduction: " << armour_damage_red << std::endl;
        std::cout << "Damage: " << damage << std::endl;
        std::cout << "Hit Points: " << hit_points << "|" \
        << max_hit_points << std::endl;
    }
    return ;
};

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (energy_points < amount)
    {
        std::cout << _name << " >> Not enough energy..." << std::endl;
    }
    else
    {
        energy_points -= amount;
        hit_points += amount;
        std::cout << _name << " >> Busy repairing..." << std::endl;
        std::cout << "Hit Points: " << hit_points << std::endl;
    }
    std::cout << "Energy Points: " << energy_points << std::endl;
    return ;
};

void            ScavTrap::challengeNewcomer(std::string const & target)
{
	int index;
    std::string challenge[] =
    {
        "Go for a nice relaxing walk",
        "Go find another opponent, you'll never win",
        "Give me 100+% during the eval",
        "Just keep going",
        "You're lucky, you're dismissed"
    };
    srand(time(NULL));
    index = rand() % 5;
	this->challenge = challenge[index];
    std::cout << this->_name << ": Your challenge is: " << this->challenge \
              << "! Have fun " << target << std::endl;
    return ;
}

std::string     ScavTrap::getName()
{
    return (this->_name);
};

unsigned int    ScavTrap::getMeleeAttackDamage()
{
    return (this->melee_att_damage);
};

unsigned int    ScavTrap::getRangedAttackDamage()
{
    return (this->ranged_att_damage);
};

unsigned int    ScavTrap::getArmourDamageReduction()
{
    return (this->armour_damage_red);
};

std::string     ScavTrap::getChallenge(void)
{
    return (this->challenge);
};
