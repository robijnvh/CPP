/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:33:48 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/03 14:13:08 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RADSCORPION_HPP_
# define _RADSCORPION_HPP_
# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy {
	
	public:
		RadScorpion(void);
		RadScorpion(const RadScorpion &obj);
	    RadScorpion    &operator=(RadScorpion const &obj);
		virtual ~RadScorpion();
};

#endif
