/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:26:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 14:46:47 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap{
  protected:
    
  public:
    NinjaTrap();
    NinjaTrap(std::string name);
	NinjaTrap& operator=(const NinjaTrap& ninjaTrap);
	NinjaTrap(const NinjaTrap& ninjaTrap);
    ~NinjaTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void ninjaShoeBox(std::string const& target);
    unsigned int get_melee();
    unsigned int get_max_energy();
    unsigned int get_energy();
};

#endif