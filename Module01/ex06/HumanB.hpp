/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:34:00 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:12:48 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
	std::string	_name;
	Weapon* _weapon;

	public:
	HumanB(std::string);
	HumanB(void);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon&);
};

#endif
