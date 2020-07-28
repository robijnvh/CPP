/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:16:31 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:14:40 by robijnvanho   ########   odam.nl         */
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
        ~Zombie(void);
        void announce(void); 
};

#endif
