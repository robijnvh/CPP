/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:13:11 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 14:22:54 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) { return ; }

Base::Base(const Base &obj)
{
    *this = obj;
    return ; 
}

Base  &Base::operator= (const Base &obj)
{
    static_cast<void>(obj);
    return (*this);
}

Base::~Base(void) {return ;}
