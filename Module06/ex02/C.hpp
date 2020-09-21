/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:18:38 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 13:19:00 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C_HPP_
# define _C_HPP_
# include "Base.hpp"

class C : public Base {
    
    public:
        C(void);
        C(const C &obj);
        C    &operator= (const C &obj);
        ~C(void);
};

#endif