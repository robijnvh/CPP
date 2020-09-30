/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:41:55 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:40:53 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
    this->_count = 0;
    this->_unit = NULL;
    return ;
}

Squad::Squad(const Squad &obj)
{
    this->copyUnits(obj);
    this->_count = obj._count;
}

Squad::~Squad() { this->destroyUnits(); }

Squad&	Squad::operator = (const Squad &obj)
{
    if (this != &obj)
    {
        this->destroyUnits();
        this->copyUnits(obj);
        this->_count = obj._count;
    }
    return (*this);
}

int				Squad::getCount(void) const
{
	return _count;
}

ISpaceMarine*	Squad::getUnit(int x)	const
{
    t_unit  *tmp;

    tmp = this->_unit;
    if (x < 0 || x >= this->_count)
    {
        return (NULL);
    }
    while (x--)
    {
        tmp = tmp->next;
    }
    return (tmp->unit);
}

int				Squad::push(ISpaceMarine *marine)
{
    t_unit *tmp;

    tmp = this->_unit;
    if (marine != NULL && this->checkDoubleUnit(marine, tmp) == false)
    {
        tmp = this->_unit;
        if (this->_unit != NULL)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_unit;
            tmp->next->unit = marine;
            tmp->next->next = NULL;
        }
        else
        {
            this->_unit = new t_unit;
            this->_unit->unit = marine;
            this->_unit->next = NULL;
        }
        this->_count += 1;
    }
    return (this->_count);
}

void	Squad::copyUnits(const Squad &src)
{
    for (int i = 0; i < src.getCount(); i += 1)
    {
        push(src.getUnit(i));
    }
    return ;
}

void	Squad::destroyUnits(void)
{
    t_unit  *tmp;

    if (this->_unit != NULL)
    {
        delete this->_unit->unit;
        tmp = this->_unit;
        this->_unit = this->_unit->next;
        delete tmp;
        return (this->destroyUnits());
    }
    return ;
}

bool	Squad::checkDoubleUnit(ISpaceMarine *marine, t_unit *_unit)
{
    if (_unit == NULL)
    {
        return (false);
    }
    else if (marine == _unit->unit)
    {
        return (true);
    }
    else
    {
        return (this->checkDoubleUnit(marine, _unit->next));
    }
}
