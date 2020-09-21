/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:17:48 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 14:20:46 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) { return ; }

B::B(const B &obj)
{
    *this = obj;
    return ; 
}

B  &B::operator= (const B &obj)
{
    static_cast<void>(obj);
    return (*this);
}

B::~B(void) {return ;}
