/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:38:06 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/03 12:32:16 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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
    std::cout << "Creating ScavTrap..." << std::endl;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
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

std::string     ScavTrap::getChallenge(void)
{
    return (this->challenge);
};
