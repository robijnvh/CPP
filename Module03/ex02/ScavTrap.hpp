/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:38:23 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/02 11:57:06 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    std::string          challenge;
    
    public:
        //constructors//destructors
        ScavTrap(std::string);
        ScavTrap(void);
        ~ScavTrap();
        //operator
        ScavTrap  &operator=(ScavTrap const &obj);
        //challenge
        void            challengeNewcomer(std::string const & target);
        std::string     getChallenge(void);
};

#endif
