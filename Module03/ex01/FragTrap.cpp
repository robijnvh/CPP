/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:30:13 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 11:28:19 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "Hi! I'm " << name << "!" << std::endl;
    this->_name = name;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->melee_att_damage = 30;
    this->ranged_att_damage = 20;
    this->armour_damage_red = 5;
    this->red_att_damage = 42;
    this->green_att_damage = 1;
    this->blue_att_damage = 100;
    this->vaulthunter_damage = 0;
    return ;
}

FragTrap::FragTrap()
{ 
}

FragTrap::~FragTrap()
{
    std::cout << this->_name << " has left the game..." << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const &obj)
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
    this->red_att_damage = obj.red_att_damage;
    this->green_att_damage = obj.green_att_damage;
    this->blue_att_damage = obj.blue_att_damage;
    this->vaulthunter_damage = obj.vaulthunter_damage;
    return (*this);
}

void    FragTrap::meleeAttack(std::string const &target)
{
    this->vaulthunter_damage = this->melee_att_damage;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " with melee, causing " << this->melee_att_damage \
              << " points of damage !" << std::endl;
    return ;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    this->vaulthunter_damage = this->ranged_att_damage;
    std::cout   << "FR4G-TP " << this->_name << " attacks " << target \
                << " at range, causing " << this->ranged_att_damage \
                << " points of damage !" << std::endl;
    return ;
}

void    FragTrap::redAttack(std::string const & target)
{
    this->vaulthunter_damage = this->red_att_damage;
    std::cout   << "FR4G-TP " << this->_name << " attacks " << target \
                << " with red power, causing " << this->red_att_damage \
                << " points of damage !" << std::endl;
}

void    FragTrap::greenAttack(std::string const & target)
{
    this->vaulthunter_damage = this->green_att_damage;
    std::cout   << "FR4G-TP " << this->_name << " attacks " << target \
                << " with green power, causing " << this->green_att_damage \
                << " points of damage !" << std::endl; 
}

void    FragTrap::blueAttack(std::string const & target)
{
    this->vaulthunter_damage = this->blue_att_damage;
    std::cout   << "FR4G-TP " << this->_name << " attacks " << target \
                << " with blue power, causing " << this->blue_att_damage \
                << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
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
        std::cout << this->_name << " >> I'm still here!" << std::endl;
        std::cout << "Armour reduction: " << this->armour_damage_red << std::endl;
        std::cout << "Damage: " << damage << std::endl;
        std::cout << "Hit Points: " << this->hit_points << "|" \
        << this->max_hit_points << std::endl;
    }
    return ;
}

void    FragTrap::beRepaired(unsigned int amount)
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
}

void            FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int   attack;

  if (this->energy_points < 25)
  {
        std::cout << this->_name << ">> Not enough energy..." << std::endl;
  }
  else
  {
        this->energy_points -= 25;
        srand(time(NULL));
        attack = rand() % 5;
        if (attack == 0)
            FragTrap::redAttack(target);
        else if (attack == 1)
            FragTrap::greenAttack(target);
        else if (attack == 2)
            FragTrap::blueAttack(target);
        else if (attack == 3)
            FragTrap::meleeAttack(target);
        else
            FragTrap::rangedAttack(target);
  }
  return ;
}

unsigned int    FragTrap::getVaultHunter_dot_exeDamage()
{
    return (this->vaulthunter_damage);
}

std::string     FragTrap::getName()
{
    return (this->_name);
}

unsigned int    FragTrap::getMeleeAttackDamage()
{
    return (this->melee_att_damage);
}

unsigned int    FragTrap::getRangedAttackDamage()
{
    return (this->ranged_att_damage);
}

unsigned int    FragTrap::getArmourDamageReduction()
{
    return (this->armour_damage_red);
}
