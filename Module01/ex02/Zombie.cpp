/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 16:26:52 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/08/04 10:54:31 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name):  _type(type), _name(name) { return ;}

Zombie::~Zombie(void) { return ;}
Zombie::Zombie(void) { return ;}

void Zombie::announce(void)
{
    std::string zombie_format;
    std::string message;

    zombie_format =  "< " + this->_name + " (" + this->_type + ")> ";
    message = "Braaaaiiinnnsss...";
    std::cout << zombie_format + message << std::endl;
    return ;
}
