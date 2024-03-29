/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:22:21 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 11:14:07 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AWEAPON_HPP_
# define _AWEAPON_HPP_
# include <iostream>
# include <string>

class AWeapon {
	std::string				_name;
	int						_apcost;
	int						_damage;
	
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &obj);
	    AWeapon    &operator=(AWeapon const &obj);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
