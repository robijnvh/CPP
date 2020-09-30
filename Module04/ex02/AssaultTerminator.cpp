/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:37:48 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:40:32 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj)
{
	*this = obj;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I’ll be back..." << std::endl;
}

AssaultTerminator&		AssaultTerminator::operator = (const AssaultTerminator &obj)
{
	ISpaceMarine::operator=(obj);
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone(void)	const
{
	return new AssaultTerminator(*this);
}

void			AssaultTerminator::battleCry(void)	const
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;	
}

void			AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;	
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;	
}
