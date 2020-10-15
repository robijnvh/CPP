/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:28:51 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 11:27:13 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_
# include <iostream>
# include <string>

class FragTrap
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
    unsigned int         red_att_damage;
    unsigned int         green_att_damage;
    unsigned int         blue_att_damage;
    unsigned int         vaulthunter_damage;
    
    public:
        //constructors//destructors
        FragTrap(std::string);
        FragTrap(void);
		FragTrap(const FragTrap &cpy);
        ~FragTrap();
        //operator
        FragTrap  &operator=(FragTrap const &obj);
        //methods
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        //get methods
        std::string 	getName(void);
        unsigned int    getMeleeAttackDamage(void);
        unsigned int    getRangedAttackDamage(void);
        unsigned int    getArmourDamageReduction(void);
        //random attack method
        unsigned int    getVaultHunter_dot_exeDamage(void);
        void            vaulthunter_dot_exe(std::string const & target);
        void            redAttack(std::string const & target);
        void            greenAttack(std::string const & target);
        void            blueAttack(std::string const & target);
};

#endif
