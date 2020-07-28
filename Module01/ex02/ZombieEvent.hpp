/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:43:03 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 17:10:31 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
    std::string  _type;
    
    public:
        ZombieEvent(void);
        ~ZombieEvent(void);
        void        setZombieType(std::string);
        std::string getZombieType(void);
        Zombie      *newZombie(std::string name);
        Zombie      *randomChump(void);
};

#endif
