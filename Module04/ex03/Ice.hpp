/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:54:57 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:26:18 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &src);
        ~Ice(void);
        Ice             &operator= (const Ice &obj);
        AMateria        *clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif
