/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:26:03 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:29:49 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) { return ;}

Zombie::~Zombie(void) { return ;}

void Zombie::announce(void)
{
    std::string zombie_format;
    std::string message;

    zombie_format =  "< " + this->name + " (" + this->type + ")> ";
    message = "Braaaaiiinnnsss...";
    std::cout << zombie_format + message << std::endl;
    return ;
}