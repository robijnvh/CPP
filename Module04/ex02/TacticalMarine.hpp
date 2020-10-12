/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:28:11 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 12:34:14 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TACTICALMARINE_HPP_
# define _TACTICALMARINE_HPP_
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine &obj);
		virtual ~TacticalMarine(void);
		TacticalMarine&	operator = (const TacticalMarine &obj);
		ISpaceMarine*	clone(void)			const;
		void			battleCry(void)		const;
		void			rangedAttack(void)	const;
		void			meleeAttack(void)	const;
};

#endif