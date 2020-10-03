/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:36:26 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/03 14:12:27 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	std::string _name;
	int			_ap;
	AWeapon		*_weapon;
	
	public:
		Character(void);
		Character(std::string const & name);
		Character(const Character &obj);
	    Character    &operator=(Character const &obj);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const & getName() const;
		int	getAp(void)	const;
		AWeapon	*getWeapon(void) const;
};

std::ostream &operator << (std::ostream &output, Character const &old);

#endif
