/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:33:22 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:35:13 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int     main(void)
{
    int n = 5;
    ZombieHorde *team = new ZombieHorde(n);
    team->announce();
    // for (int i = 0; i < n; i++)
    // {
    //     delete team->_zombie[i];
    // }
    delete team;
    while (1);
    return (0);
}