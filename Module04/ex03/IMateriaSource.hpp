/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:32:37 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:26:32 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIAL_SOURCE_HPP_
# define _IMATERIAL_SOURCE_HPP_
# include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual             ~IMateriaSource(void) {};
        virtual void        learnMateria(AMateria*) = 0;
        virtual AMateria    *createMateria(std::string const & type) = 0;
};

#endif
