/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:13:06 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/06 14:16:15 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj)
{
    *this = obj;
}

Sorcerer&    Sorcerer::operator=(Sorcerer const &obj)
{
    _name = obj._name;
    _title = obj._title;
    return (*this);
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName(void) const
{
	return (_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (_title);
}

void 			Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream&	operator<< (std::ostream &out, Sorcerer const &s)
{
	return out << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
}
