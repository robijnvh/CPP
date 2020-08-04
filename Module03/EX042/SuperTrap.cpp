/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:17:39 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 14:53:12 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): NinjaTrap(), FragTrap()
{
	std::cout << "Making a supa troupa! " << std::endl;
};

SuperTrap::SuperTrap(std::string name): NinjaTrap(name), FragTrap(name)
{
    Hit_Points = get_hit();
    Max_Hit_Points = get_max_hit();
    Energy_Points = get_energy();
    Max_Energy_points = get_max_energy();
    Melee_attack_damage = get_melee();
    Armor_damage_reduction = get_armor();
    Ranged_attack_damage = get_ranged();
	std::cout << "Making a supa troupa & naming it" << std::endl;
	FragTrap::giveName(name);
	NinjaTrap::giveName(name);
};

SuperTrap::SuperTrap(const SuperTrap& superTrap): FragTrap(superTrap)
{};

SuperTrap& SuperTrap::operator=(const SuperTrap& superTrap)
{
	FragTrap::operator=(superTrap);
	return *this;
}

SuperTrap::~SuperTrap(){
	std::cout << "Destroyer of all supa's!" << std::endl;
};

void    SuperTrap::meleeAttack(std::string const& target){ NinjaTrap::meleeAttack(target); }
void    SuperTrap::rangedAttack(std::string const& target){ FragTrap::rangedAttack(target); }

void    SuperTrap::takeDamage(unsigned int num){
    FragTrap::takeDamage(num);
}
