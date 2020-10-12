/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:26:06 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/02 16:14:55 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

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

ZombieHorde::~ZombieHorde()
{
    delete[] _zombie;
}

ZombieHorde::ZombieHorde(int n)
{
    _n = n;
    this->_zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        this->_zombie[i].setType("Monster");
        this->_zombie[i].setName(randomName());
    }
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_n; i++)
    {
        this->_zombie[i].announce();
    }
    return ;
}

Zombie*     ZombieHorde::getZombies(){
    return _zombie;
}

int         ZombieHorde::getNum(){
    return _n;
}
