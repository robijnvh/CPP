/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:58:57 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 13:53:27 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") { return ;}

Cure::Cure(const Cure &src)
{
    *this = src;
    return ;
}

Cure::~Cure(void){ return ;}

Cure	&Cure::operator= (const Cure &obj)
{
    if (this != &obj)
    {
        this->_xp = obj._xp;
    }
    return (*this);
}

AMateria	*Cure::clone(void) const
{
    return (new Cure());
}

void	Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    _xp += 10;
	return ;
}