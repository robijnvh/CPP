/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:54:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:34:01 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap{
  private:
    const static int Melee_attack_damage = 20;
    const static int Ranged_attack_damage = 15;

  public:
    ScavTrap();
    ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavTrap);
	ScavTrap& operator=(const ScavTrap& scavTrap);
    ~ScavTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void challengeNewcomer(std::string const& target);
};

#endif
