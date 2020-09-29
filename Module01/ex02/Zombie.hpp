/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:16:31 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/04 10:54:23 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class Zombie {
    std::string _type;
    std::string _name;
    
    public:
        Zombie(std::string, std::string);
        Zombie(void);
        ~Zombie(void);
        void announce(void); 
};

#endif
