/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:43:49 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/28 14:52:24 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
    Zombie      *zombie1;
    Zombie      *zombie2;
    ZombieEvent event;

    event.setZombieType("oetlul");
    zombie1 = event.randomChump();
    zombie1->announce();
    delete zombie1;
    event.setZombieType("the_Best");
    zombie2 = event.randomChump();
    zombie2->announce();
    delete zombie2;
    return (0);
}
