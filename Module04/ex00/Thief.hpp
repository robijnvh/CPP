/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Thief.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 14:02:02 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/03 14:09:33 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _THIEF_HPP_
# define _THIEF_HPP_
# include <iostream>
# include <string>
# include "Victim.hpp"

class Thief: public Victim {
    Thief(void);
    
	public:
    Thief(std::string);
    Thief(const Thief &obj);
    Thief    &operator=(Thief const &obj);
    virtual ~Thief(void);
	//methods
	virtual void			getPolymorphed() const;
};

#endif
