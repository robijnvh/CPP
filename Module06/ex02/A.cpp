/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:19:11 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 14:20:05 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) { return ; }

A::A(const A &obj)
{
    *this = obj;
    return ; 
}

A  &A::operator= (const A &obj)
{
    static_cast<void>(obj);
    return (*this);
}

A::~A(void) {return ;}