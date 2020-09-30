/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:37:13 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:40:34 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ASSAULTTERMINATOR_HPP_
# define _ASSAULTTERMINATOR_HPP_
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &obj);
		virtual ~AssaultTerminator(void);
		AssaultTerminator&	operator = (const AssaultTerminator &obj);
		ISpaceMarine*	clone(void)			const;
		void			battleCry(void)		const;
		void			rangedAttack(void)	const;
		void			meleeAttack(void)	const;
};

#endif
