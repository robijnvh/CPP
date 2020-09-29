/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:35:56 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:29:44 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_
# include <iostream>
# include <string>

class ClapTrap {
	protected:
		unsigned int         hit_points;
	    unsigned int         max_hit_points;
	    unsigned int         energy_points;
	    unsigned int         max_energy_points;
	    unsigned int         level;
	    std::string          _name;
	    unsigned int         melee_att_damage;
	    unsigned int         ranged_att_damage;
	    unsigned int         armour_damage_red;
	
	public:
        ClapTrap(std::string);
        ClapTrap(void);
        ~ClapTrap();
		ClapTrap(const ClapTrap& clapTrap);
        //operator
        ClapTrap  &operator=(ClapTrap const &obj);
		//methods
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
		std::string     getName(void);
        unsigned int    getMeleeAttackDamage(void);
        unsigned int    getRangedAttackDamage(void);
        unsigned int    getArmourDamageReduction(void);
};

#endif
