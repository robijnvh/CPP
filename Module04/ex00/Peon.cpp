/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:12:56 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/03 14:10:18 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &obj): Victim(obj) {}

Peon&    Peon::operator=(Peon const &obj)
{
    Victim::operator=(obj);
    return (*this);
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

void			Peon::getPolymorphed() const
{
	std::cout << Victim::getName() << " has been turned into a pink pony!" << std::endl;
}
