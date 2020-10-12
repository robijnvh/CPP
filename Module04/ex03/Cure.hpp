/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:58:58 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 13:38:03 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
# define _CURE_HPP_
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &src);
        ~Cure(void);
        Cure             &operator= (const Cure &obj);
        AMateria        *clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif