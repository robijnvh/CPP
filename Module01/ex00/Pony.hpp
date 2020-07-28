/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:13:19 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 12:13:28 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

# include <iostream>

class Pony {
  public:
    Pony(void);
    ~Pony(void);
    std::string     name;
    std::string     color;
    int             age;      
};

#endif