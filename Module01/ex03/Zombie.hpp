/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:16:31 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/04 10:59:55 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class Zombie {
        std::string type;
        std::string name;
    
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
		void	setName(std::string);
		void	setType(std::string);
};

#endif
