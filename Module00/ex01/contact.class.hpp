/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:42:25 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 09:43:48 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_CLASS_HPP_
# define _CONTACT_CLASS_HPP_

# include <iostream>
# include <string.h>

class Contact {
  public: 
    std::string data[11];
    std::string array[11];
    void  add_data(void);
    void  table(void);
    void  print_this();
};

#endif
