/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:13:19 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 13:42:27 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

# include <iostream>

class Pony {
	std::string const _name;
	std::string const _color;
	std::string const _age;
	
  public:
    Pony(std::string name, std::string  color, std::string age);
    ~Pony(void);
	
	std::string const giveColor();
	std::string const giveName();
	std::string const giveAge(); 
};

#endif