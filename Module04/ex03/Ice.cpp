/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:55:39 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:26:16 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") { return ;}

Ice::Ice(const Ice &src)
{
    *this = src;
    return ;
}

Ice::~Ice(void){ return ;}

Ice		&Ice::operator= (const Ice &obj)
{
    if (this != &obj)
    {
        this->_xp = obj._xp;
    }
    return (*this);
}

AMateria	*Ice::clone(void) const
{
    return (new Ice());
}

void	Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" \
              << std::endl;
    return ;
}
