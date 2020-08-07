/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:40:53 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 12:45:37 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SQUAD_HPP_
# define _SQUAD_HPP_
# include <iostream>
# include <string>
# include "ISquad.hpp"

typedef struct		s_unit
{
	ISpaceMarine	*unit;
	s_unit			*next;
}					t_unit;

class	Squad : public ISquad {
	int		_count;
	t_unit	*_unit;

	public:
		Squad(void);
		Squad(const Squad &obj);
		~Squad(void);
		Squad&	operator = (const Squad &obj);
		int				getCount(void)	const;
		ISpaceMarine*	getUnit(int)	const;
		int				push(ISpaceMarine*);
};

#endif