/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 14:37:33 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/08/07 10:58:05 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PLASMARIFLE_HPP_
# define _PLASMARIFLE_HPP_
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	std::string		_outputAttack;
	
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &obj);
	    PlasmaRifle    &operator=(PlasmaRifle const &obj);
		virtual ~PlasmaRifle();
		void attack() const;
};

#endif
