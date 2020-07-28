/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:09:57 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/07/28 16:05:33 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// default constructor
Pony::Pony(std::string name, std::string  color, std::string age) :
			_name(name), _color(color), _age(age) {}

Pony::~Pony()
{
	std::cout << "Deleting " << this->_name << "...\n";
}

std::string const Pony::giveName()
{
	return (this->_name);
}

std::string const Pony::giveColor()
{
	return (this->_color);
}

std::string const Pony::giveAge()
{
	return (this->_age);
}
