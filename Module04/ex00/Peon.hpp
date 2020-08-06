/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:53:28 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 14:17:48 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PEON_HPP_
# define _PEON_HPP_
# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim {
    Peon(void);
    
	public:
    Peon(std::string);
    Peon(const Peon &obj);
    Peon    &operator=(Peon const &obj);
    virtual ~Peon(void);
	//methods
	virtual void			getPolymorphed() const;
};

#endif
