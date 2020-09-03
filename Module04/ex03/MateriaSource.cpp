/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:33:39 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 13:35:15 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->_index = 0;
    for (int i = 0; i < 4; i += 1)
    {
        this->_inventory[i] = NULL;
    }
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
    return ;
}

MateriaSource::~MateriaSource(void) { return ;}

MateriaSource	&MateriaSource::operator= (const MateriaSource &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4; i += 1)
        {
            this->_inventory[i] = NULL;
            this->_inventory[i] = obj._inventory[0]->clone();
        }
        this->_index = obj._index;
    }
    return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
    if (this->_index < 3)
    {
        this->_inventory[this->_index] = m;
        this->_index += 1;
    }
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
    if (type == "ice")
    {
        return (new Ice());
    }
    else if (type == "cure")
    {
        return (new Cure());
    }
    return (NULL);
}