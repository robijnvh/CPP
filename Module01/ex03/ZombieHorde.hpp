/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:26:08 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/02 16:07:57 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {
    int     _n;
    Zombie  *_zombie;
    
    public:
        ZombieHorde(){};
        ZombieHorde(int);
        ~ZombieHorde();
        Zombie*     getZombies();
        int         getNum();
        void        announce(void);
};

#endif
