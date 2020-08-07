/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:41:55 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 12:50:52 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): _count(0), _unit(NULL) {};

Squad::Squad(const Squad &obj)
{
	*this = obj;
}

Squad::~Squad() {};

Squad&	Squad::operator = (const Squad &obj)
{
	ISquad::operator=(obj);
	return (*this);
}

int				Squad::getCount(void) const
{
	return _count;
}

ISpaceMarine*	Squad::getUnit(int x)	const
{
	t_unit	*tmp;

	tmp = _unit;
	for (int i = 0;i < x;i++)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp->unit);
}

int				Squad::push(ISpaceMarine*)
{
	
}