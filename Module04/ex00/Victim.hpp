/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:38:24 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 14:18:00 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _VICTIM_HPP_
# define _VICTIM_HPP_
# include <iostream>
# include <string>

class Victim {
    std::string _name;
    Victim(void);
    
	public:
    Victim(std::string);
    Victim(const Victim &obj);
    Victim    &operator=(Victim const &obj);
    virtual ~Victim(void);
	//methods
	std::string		getName(void) const;
	virtual void			getPolymorphed() const;
};

std::ostream&	operator<< (std::ostream &out, Victim const &v);

#endif
