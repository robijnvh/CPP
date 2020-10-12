/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:00:47 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/02 12:04:40 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "Hi! I'm Ninja " << name << "!" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armourDamageReduction = 0;
    return ;
}

NinjaTrap::NinjaTrap()
{ 
	std::cout << "Hi! I'm Ninja C-4!" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "C-4";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armourDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap& ninjaTrap): ClapTrap(ninjaTrap)
{
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap Destructor called" << std::endl;	
}

NinjaTrap&   NinjaTrap::operator=(NinjaTrap const &obj)
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

void		NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << this->_name << " hits " << obj.getName() << " with shoebox" << std::endl;
	obj.takeDamage(10);
}

void		NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << this->_name << " throws Shoebox at " << obj.getName() << std::endl;
	obj.takeDamage(10);
}

void		NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << this->_name << " bought new shoes for " << obj.getName() << std::endl;	
	obj.takeDamage(10);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	std::cout << this->_name << " sings about his new shoes for " << obj.getName() << std::endl;	
	obj.takeDamage(10);
}
