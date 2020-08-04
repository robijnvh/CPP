/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:33:40 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/04 12:58:14 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(), FragTrap(), NinjaTrap()
{
    std::cout << "Hi! I'm Super " << name << "!" << std::endl;
	this->_hitPoints = FragTrap::hit_points;
	this->_maxHitPoints = FragTrap::max_hit_points;
	this->_energyPoints = NinjaTrap::energy_points;
	this->_maxEnergyPoints = NinjaTrap::max_energy_points;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = NinjaTrap::melee_att_damage;
	this->_rangedAttackDamage = FragTrap::ranged_att_damage;
	this->_armourDamageReduction = FragTrap::armour_damage_red;
    return ;
};

SuperTrap::SuperTrap(): ClapTrap(), FragTrap(), NinjaTrap()
{ 
	std::cout << "Hi! I'm Super S-1!" << std::endl;
	this->_hitPoints = FragTrap::hit_points;
	this->_maxHitPoints = FragTrap::max_hit_points;
	this->_energyPoints = NinjaTrap::energy_points;
	this->_maxEnergyPoints = NinjaTrap::max_energy_points;
	this->_level = 1;
	this->_name = "S-1";
	this->_meleeAttackDamage = NinjaTrap::melee_att_damage;
	this->_rangedAttackDamage = FragTrap::ranged_att_damage;
	this->_armourDamageReduction = FragTrap::armour_damage_red;
};

SuperTrap::SuperTrap(const SuperTrap& superTrap): ClapTrap(superTrap)
{
};

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap Destructor called" << std::endl;	
};

SuperTrap&   SuperTrap::operator=(SuperTrap const &obj)
{
	this->_hitPoints = obj._hitPoints;
	this->_maxHitPoints = obj._maxHitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_maxEnergyPoints = obj._maxEnergyPoints;
	this->_level = obj._level;
	this->_name = obj._name;
	this->_meleeAttackDamage = obj._meleeAttackDamage;
	this->_rangedAttackDamage = obj._rangedAttackDamage;
	this->_armourDamageReduction = obj._armourDamageReduction;
    return (*this);
}
