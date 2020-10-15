/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConversion.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:09:45 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/14 14:15:34 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERSION_HPP_
# define _SCALARCONVERSION_HPP_

#include <cctype> 
#include <cstdio>
#include <exception>
#include <iostream>
#include <climits>
#include <stdexcept>

enum    Type {
    _Char = 0,
    _Int,
    _Float,
    _Double,
    _Invalid,
};

enum    Flag {
    _None = 0,
    _Inf,
    _Nan,
};

class ScalarConv
{
    void            checkForOverflow(std::string arg);
    void            convertToChar(void);
    void            convertToDigit(void);
    Type            findType(std::string &arg);
    // static double   convertToDouble(double value);
    // static float    convertToFloat(double value);
    Type        _type;
    Flag        _flag;
    std::string _exceptions[4];
    char        _char;
    int         _int;
    float       _float;
    double      _double;
    
    public:
        ScalarConv(void);
        ScalarConv(const ScalarConv &obj);
        ~ScalarConv(void);
        ScalarConv      &operator= (const ScalarConv &obj);
        void            convert(std::string &arg);
        void            printConverted(void) const;
};

#endif
