/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:16:22 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 12:25:55 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ISQUAD_HPP_
# define _ISQUAD_HPP_
# include "ISpaceMarine.hpp"

class ISquad {
	
	public:
		virtual ~ISquad() {};
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif