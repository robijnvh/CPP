/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConv.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:19:24 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 12:19:50 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConv::ScalarConv(void) { return ; }

ScalarConv::ScalarConv(const ScalarConv &obj)
{
    *this = obj;
    return ;
}

ScalarConv::~ScalarConv(void) { return ; }

ScalarConv  &ScalarConv::operator= (const ScalarConv &obj)
{
    static_cast<void>(obj);
    return (*this);
}

char    ScalarConv::convertToChar(double value)
{
    char    c;

    if (std::isnan(value) == true)
    {
        throw (ScalarConv::Impossible());
    }
    c = static_cast<char>(value);
    if (std::isprint(c) == false)
    {
        throw (ScalarConv::NonDisplayable());
    }
    return (c);
}

int ScalarConv::convertToInt(double value)
{
    if (std::isnan(value) == true || std::isinf(value) == true)
    {
        throw (ScalarConv::Impossible());
    }
    if (value > static_cast<double>(INT_MAX) || value < static_cast<double>(INT_MIN))
    {
        throw (ScalarConv::Impossible());
    }
    return (static_cast<int>(value));
}

float   ScalarConv::convertToFloat(double value)    { return (static_cast<float>(value)); }

double  ScalarConv::convertToDouble(double value) { return (static_cast<double>(value)); }

ScalarConv::NonDisplayable::NonDisplayable(void) { return ;}

ScalarConv::NonDisplayable::NonDisplayable(ScalarConv::NonDisplayable const &obj)
{
    *this = obj;
    return ;
}

ScalarConv::NonDisplayable::~NonDisplayable(void) throw() { return ; }

ScalarConv::NonDisplayable  &ScalarConv::NonDisplayable::operator= (const ScalarConv::NonDisplayable &obj)
{
    static_cast<void>(obj);
    return (*this);
}

const char  *ScalarConv::NonDisplayable::what(void) const throw()   { return("Non displayable"); }

ScalarConv::Impossible::Impossible(void) { return ; }

ScalarConv::Impossible::Impossible(ScalarConv::Impossible const &obj)
{
    *this = obj;
    return ;
}

ScalarConv::Impossible::~Impossible(void) throw() { return ; }

ScalarConv::Impossible  &ScalarConv::Impossible::operator= (const ScalarConv::Impossible &obj)
{
    static_cast<void>(obj);
    return (*this);
}

const char  *ScalarConv::Impossible::what(void) const throw()   { return("impossible"); }