/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:17:39 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:34:08 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "Constructing Supa! " << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    Hit_Points = get_hit();
    Max_Hit_Points = get_max_hit();
    Energy_Points = get_energy();
    Max_Energy_points = get_max_energy();
    Melee_attack_damage = get_melee();
    Armor_damage_reduction = get_armor();
    Ranged_attack_damage = get_ranged();
	std::cout << "Constructing Supa with given name" << std::endl;
	FragTrap::giveName(name);
	NinjaTrap::giveName(name);
}

SuperTrap::SuperTrap(const SuperTrap& superTrap): FragTrap(superTrap)
{}

SuperTrap& SuperTrap::operator=(const SuperTrap& superTrap)
{
	FragTrap::operator=(superTrap);
	return *this;
}

SuperTrap::~SuperTrap(){
	std::cout << "Destructor of all supa's!" << std::endl;
}

void    SuperTrap::meleeAttack(std::string const& target){ NinjaTrap::meleeAttack(target); }
void    SuperTrap::rangedAttack(std::string const& target){ FragTrap::rangedAttack(target); }

void    SuperTrap::takeDamage(unsigned int num){
    FragTrap::takeDamage(num);
}
