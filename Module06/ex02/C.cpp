/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:18:04 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 14:20:28 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) { return ; }

C::C(const C &obj)
{
    *this = obj;
    return ; 
}

C  &C::operator= (const C &obj)
{
    static_cast<void>(obj);
    return (*this);
}

C::~C(void) {return ;}
