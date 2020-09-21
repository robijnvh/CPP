/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:18:08 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 13:18:31 by robijnvanho   ########   odam.nl         */
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