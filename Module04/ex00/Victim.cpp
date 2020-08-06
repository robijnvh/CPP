/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:42:26 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/08/06 14:52:23 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &obj)
{
    *this = obj;
}

Victim&    Victim::operator=(Victim const &obj)
{
    _name = obj._name;
    return (*this);
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string		Victim::getName(void) const
{
	return (_name);
}

void			Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&	operator<< (std::ostream &out, Victim const &v)
{
	return out << "I'm " << v.getName() << " and I like otters!" << std::endl;
}
