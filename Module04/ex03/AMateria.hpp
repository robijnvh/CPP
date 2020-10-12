/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:03:51 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 13:43:04 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_
# include <string>
# include <cstdlib>
# include "ICharacter.hpp"

class AMateria {
	protected:
		unsigned int 	_xp;
		std::string     _type;
	
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &obj);
	    AMateria    &operator=(AMateria const &obj);
		virtual ~AMateria(void);
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target) = 0;
};

#endif