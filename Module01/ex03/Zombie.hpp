/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:16:31 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 19:14:02 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class Zombie {
    
    public:
        Zombie(void);
        ~Zombie(void);
        
        std::string type;
        std::string name;
        void announce(void); 
};

#endif
