/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 18:33:22 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/10/02 16:17:04 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void    makeZombie(void)
{
    ZombieHorde test = ZombieHorde(10);
    test.announce();
}

int     main(void)
{
    makeZombie();
    system("leaks a.out | grep bytes");
    return (0);
}
