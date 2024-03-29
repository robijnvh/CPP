/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:04:08 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/28 14:52:32 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) { return ;}

ZombieEvent::~ZombieEvent(void) { return ;}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return ;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(_type, name));
}

Zombie  *ZombieEvent::randomChump(void)
{
    int             index;
    static bool     first = true;
    Zombie          *zombie;
    std::string     names[] = {"Wester", "Tim", "Rene", "Maarten", "Robijn"};
    
    if (this->_type == "")
        this->setZombieType("lol");
    if (first == true)
    {
        srand(time (0));
        first = false;
    }
    index = (rand() % 5); 
    zombie = this->newZombie(names[index]);
    return (zombie);
}
