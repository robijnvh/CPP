/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:33:43 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/04 12:58:45 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERTRAP_HPP_
# define _SUPERTRAP_HPP_
# include <iostream>
# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, NinjaTrap {
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armourDamageReduction;
	
	public:
		SuperTrap();
		SuperTrap(std::string n);
		SuperTrap(const SuperTrap& superTrap);
		virtual ~SuperTrap();
        SuperTrap 	&operator=(SuperTrap const &obj);
		using		FragTrap::rangedAttack;
		using		NinjaTrap::meleeAttack;
};

#endif
