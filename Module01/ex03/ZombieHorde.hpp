/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:26:08 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:38:05 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {
    int     n;
    Zombie  *_zombie;
    
    public:
        ZombieHorde(int);
        ~ZombieHorde(void);
        void announce(void);
        // void delall(void);
};

#endif