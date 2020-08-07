/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:28:54 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 12:36:54 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj)
{
	*this = obj;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine&		TacticalMarine::operator = (const TacticalMarine &obj)
{
	ISpaceMarine::operator=(obj);
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone(void)	const
{
	return new TacticalMarine(*this);
}

void			TacticalMarine::battleCry(void)	const
{
	std::cout <<  "For the holy PLOT!" << std::endl;	
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;	
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;	
}
