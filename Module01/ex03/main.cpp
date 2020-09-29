/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 18:33:22 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/09/28 15:55:39 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void    makeZombie(void)
{
    ZombieHorde test = ZombieHorde(10);
    for (int i = 0; i < test.getNum(); i++)
    {
        test.getZombies()[i].announce();
    }
}

int     main(void)
{
    makeZombie();
    // system("leaks a.out | grep bytes");
    return (0);
}
