/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:13:06 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/05 18:32:37 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

// Sorcerer::Sorcerer()
// {
//     // throw (void);
//     std::cout << "Constructing Sorcerer" << std::endl;
// }

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
