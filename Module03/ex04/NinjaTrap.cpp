/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:27:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 15:15:08 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	std::cout << "Constructing Ninja" << std::endl;
};

NinjaTrap::NinjaTrap(std::string name)
{
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	std::cout << "Constructing Ninja with given name" << std::endl;
	this->giveName(name);
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
};

NinjaTrap::NinjaTrap(const NinjaTrap& ninjaTrap): ClapTrap(ninjaTrap)
{};

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& ninjaTrap)
{
	ClapTrap::operator=(ninjaTrap);
	return *this;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "Destructing Ninja!" << std::endl;
};

unsigned int	NinjaTrap::get_melee(){ return Melee_attack_damage; }
unsigned int	NinjaTrap::get_max_energy(){ return Max_Energy_points; }
unsigned int	NinjaTrap::get_energy(){ return Energy_Points; }


void    NinjaTrap::rangedAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " can't Trap no more..." << std::endl;	
		return ;
	}
	std::cout << "man named " << this->takeName() << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	NinjaTrap::meleeAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " can't Trap no more..." << std::endl;	
		return ;
	}
	std::cout << "man named "  << this->takeName() << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	std::cout << Name << " sneezes on " << obj.takeName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	std::cout << Name << " shakes hands with " << obj.takeName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	std::cout << Name << " touches keyboard of " << obj.takeName() << std::endl;	
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
	std::cout << Name << " gives covid to " << obj.takeName() << std::endl;	
}

// void	NinjaTrap::ninjaShoeBox(std::string const& target){
// 	if (hitPoints() == 0){
// 		std::cout << this->takeName() << " can't Trap no more..." << std::endl;	
// 		return ;
// 	}
// 	std::string attacks[] = {" sneezes on ", " shakes hands with ", " touches keyboard of ", " gives covid to ", " kicks "} ;
// 	static int yes = 1;
// 	int num; 
		
// 	if (yes == 1){
//         srand(time(NULL));
//         yes = 0;
//     }
//     num = rand() % 5;
// 	if (energyPoints() <= 25){
// 		std::cout << this->takeName() << " is low on energy." << std::endl;	
// 		return ;
// 	}
// 	std::cout << this->takeName() << attacks[num] << target << std::endl;
// }