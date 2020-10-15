/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:15:20 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:34:14 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERTRAP_HPP_
# define _SUPERTRAP_HPP_

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : public NinjaTrap, public FragTrap{
  protected:
    int Hit_Points;
	unsigned int Max_Hit_Points;
	int Energy_Points;
	unsigned int Max_Energy_points;
	const static int Level = 1;
	std::string Name;
	unsigned int Melee_attack_damage;
	unsigned int Ranged_attack_damage;
	unsigned int Armor_damage_reduction;
    
  public:
    SuperTrap();
    SuperTrap(std::string name);
	SuperTrap(const SuperTrap& superTrap);
	SuperTrap& operator=(const SuperTrap& superTrap);
    ~SuperTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int num); 
};

#endif
