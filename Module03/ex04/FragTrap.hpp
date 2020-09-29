/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:43:56 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:33:32 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap{
  protected:
    const static int Melee_attack_damage = 30;
    const static int Ranged_attack_damage = 20;

  public:
    FragTrap();
    FragTrap(std::string name);
	FragTrap(const FragTrap& fragTrap);
	FragTrap& operator=(const FragTrap& fragTrap);
    ~FragTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void vaulthunter_dot_exe(std::string const& target);
    
    unsigned int get_ranged();
    unsigned int get_armor();
    unsigned int get_max_hit();
    unsigned int get_hit();
};

#endif
