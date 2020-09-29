/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:32:48 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:12:50 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	std::string	_name;
	Weapon& _weapon;

	public:
	HumanA(std::string, Weapon&);
	HumanA(void);
	~HumanA(void);
	void	attack(void);
};

#endif
