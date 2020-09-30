/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:33:54 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:26:43 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria            *_inventory[4];
    int                 _index;
	
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        ~MateriaSource(void);
        MateriaSource       &operator= (const MateriaSource &obj);
        virtual void        learnMateria(AMateria *m);
        virtual AMateria    *createMateria(const std::string &type);
};

#endif
