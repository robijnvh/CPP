/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:26:52 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:14:32 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name):  _type(type), _name(name) { return ;}

Zombie::~Zombie(void) { return ;}

void Zombie::announce(void)
{
    std::string zombie_format;
    std::string message;

    zombie_format =  "< " + this->_name + " (" + this->_type + ")> ";
    message = "Braaaaiiinnnsss...";
    std::cout << zombie_format + message << std::endl;
    return ;
}
