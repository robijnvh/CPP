/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:00:15 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:31:58 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_
# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
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
		NinjaTrap();
		NinjaTrap(std::string n);
		NinjaTrap(const NinjaTrap& ninjaTrap);
		~NinjaTrap();
        NinjaTrap 	&operator=(NinjaTrap const &obj);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const & target);
		void		ninjaShoebox(ScavTrap &obj);
		void		ninjaShoebox(FragTrap &obj);
		void		ninjaShoebox(NinjaTrap &obj);
		void		ninjaShoebox(ClapTrap &obj);
};

#endif
