/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:28:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 15:07:21 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructing ClapTrap" << std::endl;
	Hit_Points = 0;
	Energy_Points = 0;
	Max_Energy_points = 0;
	Armor_damage_reduction = 0;
};

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructing Claptrap with given name" << std::endl;
	Name = name;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) { *this = clapTrap; };

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	Hit_Points = clapTrap.Hit_Points;
	Energy_Points = clapTrap.Energy_Points;
	Max_Energy_points = clapTrap.Max_Energy_points;
	Armor_damage_reduction = clapTrap.Armor_damage_reduction;
	return *this;
}

ClapTrap::~ClapTrap(){ std::cout << "Destructing Claptrap" << std::endl; };

//

void	ClapTrap::giveName(std::string name)
{
	Name = name;
}

std::string ClapTrap::takeName()
{
	return Name;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints() == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "Healing by " << amount << " points :)" << std::endl;
	changeEnergy(amount);
	changeHit(amount);
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints() == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << Name << " says: wooooo, nNooohhh pleas don't hurt me !" << std::endl;
	if (amount <= Armor_damage_reduction){
		std::cout << Name << " says just kidding.. blocked joo whimpy ass attack" << std::endl;
		return ;
	}
	changeHit(int(amount - Armor_damage_reduction) * -1);
	std::cout << "got hit !!!<< " << Hit_Points << std::endl;
	if (hitPoints() <= 0){
		std::cout << Name << " was murdered!...." << std::endl;
		changeHit(0);
		return ;
	}
	std::cout << Name << " was severly beaten by " << (amount - Armor_damage_reduction) << std::endl;
}

void	ClapTrap::changeEnergy(int num)
{
	if (Energy_Points + num > (int)Max_Energy_points){
		Energy_Points = Max_Energy_points;
		std::cout << Name << " has full Energy!!!" << std::endl;
	}
	else
		Energy_Points += num;
}

int		ClapTrap::energyPoints()
{
	return Energy_Points; 
}

void	ClapTrap::changeHit(int num)
{
	if (num == 0) {
		Hit_Points = 0;
		return ;
	}
	if (Hit_Points + num > (int)Max_Hit_Points){
		Hit_Points = Max_Hit_Points;
		std::cout << Name << " has full Hit!!!" << std::endl;
	}
	else
		Hit_Points += num;
}

int		ClapTrap::hitPoints()
{
	return Hit_Points; 
}

void	ClapTrap::changeArmorReduction(int num)
{
	Armor_damage_reduction = num;
}

int		ClapTrap::Max_Energy()
{
	return Max_Hit_Points;
}

void	ClapTrap::changeMax(unsigned int num)
{
	Max_Energy_points = num;	
}

int		ClapTrap::Max_Hit()
{
	return Max_Hit_Points;
}

void	ClapTrap::changeMaxHit(unsigned int num)
{
	Max_Hit_Points = num;
}