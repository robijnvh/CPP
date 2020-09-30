/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:28:12 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:26:05 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_
# include <string>
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    std::string                 _name;
    AMateria*                   _inventory[4];
    int                         _index;
	
    public:
        Character(void);
        Character(const std::string &name);
        Character(const Character &src);
        ~Character(void);
        Character                   &operator= (const Character &obj);
        virtual void                equip(AMateria* m);
        virtual void                unequip(int x);
        virtual void                use(int x, ICharacter& target);
        virtual const std::string   &getName() const;
};

#endif
