/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:38:23 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 11:28:48 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_
# include <iostream>
# include <string>

class ScavTrap
{
    unsigned int         hit_points;
    unsigned int         max_hit_points;
    unsigned int         energy_points;
    unsigned int         max_energy_points;
    unsigned int         level;
    std::string          _name;
    unsigned int         melee_att_damage;
    unsigned int         ranged_att_damage;
    unsigned int         armour_damage_red;
    std::string          challenge;
    
    public:
        //constructors//destructors
        ScavTrap(std::string);
        ScavTrap(void);
        ~ScavTrap();
		ScavTrap(const ScavTrap& scavTrap);

        //operator
        ScavTrap  &operator=(ScavTrap const &obj);
        //methods
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        //get methods
        std::string     getName(void);
        unsigned int    getMeleeAttackDamage(void);
        unsigned int    getRangedAttackDamage(void);
        unsigned int    getArmourDamageReduction(void);
        //challenge
        void            challengeNewcomer(std::string const & target);
        std::string     getChallenge(void);
};

#endif
