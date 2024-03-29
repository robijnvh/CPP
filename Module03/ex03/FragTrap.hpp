/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:28:51 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/02 11:59:38 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    unsigned int         red_att_damage;
    unsigned int         green_att_damage;
    unsigned int         blue_att_damage;
    unsigned int         vaulthunter_damage;
    
    public:
        //constructors//destructors
        FragTrap(std::string);
        FragTrap(void);
        ~FragTrap();
        //operator
        FragTrap  &operator=(FragTrap const &obj);
        //random attack method
		void    		rangedAttack_extra(std::string const & target);
        void    		meleeAttack_extra(std::string const & target);
        unsigned int    getVaultHunter_dot_exeDamage(void);
        void            vaulthunter_dot_exe(std::string const & target);
        void            redAttack(std::string const & target);
        void            greenAttack(std::string const & target);
        void            blueAttack(std::string const & target);
};

#endif
