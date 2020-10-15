/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:42:25 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/29 16:35:02 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_CLASS_HPP_
# define _CONTACT_CLASS_HPP_

# include <iostream>
# include <string.h>
# include <sstream>

class Contact {
    std::string data[11];
    std::string array[11];
	
  public: 
    Contact();
    ~Contact();
    void  add_data(void);
    void  table(void);
    void  print_this();
};

#endif
