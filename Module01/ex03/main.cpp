/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:33:22 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/29 10:24:06 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int     main(void)
{
    int n = 5;
    ZombieHorde *team = new ZombieHorde(n);
    team->announce();
    return (0);
}