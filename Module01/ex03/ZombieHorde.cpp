/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:26:06 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:38:03 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

// void ZombieHorde::delall(void)
// {
//     for (int i = 0; i < this->n; i++)
//     {
//         delete this->_zombie[i];
//     }
//     return ;
// }

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->n; i++)
    {
        this->_zombie[i].announce();
    }
    return ;
}

std::string     randomName(void)
{
    int             index;
    std::string     names[] = {"Wester", "Tim", "Rene", "Maarten", "Robijn"};
    static bool     first = true;
    
    if (first == true)
    {
        srand(time (0));
        first = false;
    }
    index = (rand() % 5);
    return (names[index]);
}

ZombieHorde::~ZombieHorde(void) {return ;};

ZombieHorde::ZombieHorde(int n): n(n)
{
    this->_zombie = new Zombie[n]();
    
    for (int i = 0; i < n; i++)
    {
        this->_zombie[i].type = "Monster";
        this->_zombie[i].name = randomName();
    }
}