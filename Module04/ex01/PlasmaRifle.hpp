/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:37:33 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 15:25:54 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PLASMARIFLE_HPP_
# define _PLASMARIFLE_HPP_
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: virtual public AWeapon {
	std::string		_outputAttack;
	
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &obj);
	    PlasmaRifle    &operator=(PlasmaRifle const &obj);
		virtual ~PlasmaRifle();
		virtual void attack() const;
		// std::string getName() const;
		// int getAPCost() const;
		// int getDamage() const;
		// virtual void attack() const = 0;
};

#endif
