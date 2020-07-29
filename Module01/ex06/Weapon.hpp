/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:22:44 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/07/29 11:31:39 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_
# include <iostream>
# include <string>

class Weapon {
	std::string _type;

	public:
	Weapon(std::string);
	~Weapon(void);
	const std::string	getType(void);
	void	setType(std::string);
};

#endif