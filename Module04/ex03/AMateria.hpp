/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:03:51 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 13:05:42 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
	unsigned int _xp;
	
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &obj);
	    AMateria    &operator=(AMateria const &obj);
		virtual ~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif