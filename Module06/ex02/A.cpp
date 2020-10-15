/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:19:11 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 12:39:18 by rvan-hou      ########   odam.nl         */
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
