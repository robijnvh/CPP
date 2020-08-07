/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:52:47 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 10:57:32 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POWERFIST_HPP_
# define _POWERFIST_HPP_
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	std::string		_outputAttack;
	
	public:
		PowerFist(void);
		PowerFist(const PowerFist &obj);
	    PowerFist    &operator=(PowerFist const &obj);
		virtual ~PowerFist();
		void attack() const;
};

#endif
