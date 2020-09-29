/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:26:03 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/28 15:26:34 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{}

void Zombie::announce(void)
{
    std::string zombie_format;
    std::string message;

    zombie_format =  "< " + this->name + " (" + this->type + ")> ";
    message = "Braaaaiiinnnsss...";
    std::cout << zombie_format + message << std::endl;
}

void	Zombie::setName(std::string _name)
{
	this->name = _name;
}

void	Zombie::setType(std::string _type)
{
	this->type = _type;
}
