/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:18:08 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 12:39:24 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _B_HPP_
# define _B_HPP_
# include "Base.hpp"

class B : public Base {
    
    public:
        B(void);
        B(const B &obj);
        B    &operator= (const B &obj);
        ~B(void);
};

#endif
