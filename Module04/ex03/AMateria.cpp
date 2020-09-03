/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:47:59 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 12:49:49 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) { return ;}

AMateria::AMateria(const std::string &type)
{
    this->_xp = 0;
    this->_type = type;
    return ;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    return ;
}

AMateria::~AMateria(void){ return ;}

AMateria	&AMateria::operator= (const AMateria &rhs)
{
    if (this != &rhs)
    {
        this->_xp = rhs._xp;
        this->_type = rhs._type;
    }
    return (*this);
}

const std::string	&AMateria::getType(void) const
{
    return (this->_type);
}

unsigned int  AMateria::getXP(void) const
{
    return (this->_xp);
}
