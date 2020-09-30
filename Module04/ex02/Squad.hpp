/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:40:53 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:41:03 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SQUAD_HPP_
# define _SQUAD_HPP_
# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"


class	Squad : public ISquad {
	typedef struct		s_unit
	{
		ISpaceMarine	*unit;
		s_unit			*next;
	}					t_unit;
	
	int		_count;
	t_unit	*_unit;
	
    void                  copyUnits(const Squad &src);
    void                  destroyUnits(void);
    bool                  checkDoubleUnit(ISpaceMarine *marine, t_unit *_unit);
	
	public:
		Squad(void);
		Squad(const Squad &obj);
		~Squad(void);
		Squad&	operator = (const Squad &obj);
		virtual int				getCount(void)	const;
		virtual ISpaceMarine*	getUnit(int)	const;
		virtual int				push(ISpaceMarine*);
};

#endif
