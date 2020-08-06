/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:13:09 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/06 14:17:58 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SORCERER_HPP_
# define _SORCERER_HPP_
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer {
    std::string _name;
    std::string _title;
    Sorcerer(void);
    
	public:
    Sorcerer(std::string, std::string);
    Sorcerer(const Sorcerer &obj);
    Sorcerer    &operator=(Sorcerer const &obj);
    ~Sorcerer(void);
	//methods
	std::string		getName(void) const;
	std::string		getTitle(void) const;
 	void 			polymorph(Victim const &) const;
};

std::ostream&	operator<< (std::ostream &out, Sorcerer const &s);

#endif
