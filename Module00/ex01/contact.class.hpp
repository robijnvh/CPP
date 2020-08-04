/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:42:25 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/03 16:07:03 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_CLASS_HPP_
# define _CONTACT_CLASS_HPP_

# include <iostream>
# include <string.h>

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
