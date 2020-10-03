/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Thief.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 14:02:45 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/03 14:10:11 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Thief.hpp"

Thief::Thief(std::string name): Victim(name)
{
    std::cout << "Whoop whoop." << std::endl;
}

Thief::Thief(const Thief &obj): Victim(obj) {}

Thief&    Thief::operator=(Thief const &obj)
{
    Victim::operator=(obj);
    return (*this);
}

Thief::~Thief(void)
{
    std::cout << "Sshhh..." << std::endl;
}

void			Thief::getPolymorphed() const
{
	std::cout << Victim::getName() << " has been turned into a Fox!" << std::endl;
}
