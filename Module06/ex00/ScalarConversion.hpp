/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConversion.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:09:45 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 12:25:18 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERSION_HPP_
# define _SCALARCONVERSION_HPP_
# include <cmath>
# include <string>
# include <iomanip>
# include <cstring>
# include <climits>
# include <iostream>

class ScalarConv
{
    public:
        class NonDisplayable : public std::exception
        {
            public:
                NonDisplayable(void);
                NonDisplayable(NonDisplayable const &obj);
                virtual ~NonDisplayable(void) throw();
                NonDisplayable          &operator= (const NonDisplayable &obj);
                const char              *what(void) const throw();
        };
        class Impossible : public std::exception
        {
            public:
                Impossible(void);
                Impossible(Impossible const &obj);
                virtual ~Impossible(void) throw();
                Impossible              &operator= (const Impossible &obj);
                const char              *what(void) const throw();
        };
        ScalarConv(void);
        ScalarConv(const ScalarConv &obj);
        ~ScalarConv(void);
        ScalarConv      &operator= (const ScalarConv &obj);
        static int      findPrecision(char *str);
        static char     convertToChar(double value);
        static int      convertToInt(double value);
        static double   convertToDouble(double value);
        static float    convertToFloat(double value);
};

#endif