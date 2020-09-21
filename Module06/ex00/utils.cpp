/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:06:06 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 12:34:38 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int findPrecision(char *str)
{
    unsigned int     before;
    unsigned int     after;

    before = 0;
    while (str[before] && str[before] != '.')
    {
        before += 1;
    }
    after = before + 1;
    while (str[after] && isdigit(str[after]))
    {
        after += 1;
    }
    after -= before;
    return ((strlen(str) == before || after == 1) ? 1 : after - 1);
}

void    checkForChar(ScalarConv scalar, double value)
{
    try
    {
        std::cout << "char: ";
        std::cout << scalar.convertToChar(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    checkForInt(ScalarConv scalar, double value)
{
    try
    {
        std::cout << "int: ";
        std::cout << scalar.convertToInt(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    checkForDouble(ScalarConv scalar, double value, int precision)
{
    try
    {
        std::cout << "double: ";
        std::cout << std::setprecision(precision) << std::fixed << scalar.convertToDouble(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    checkForFloat(ScalarConv scalar, double value, int precision)
{
    try
    {
        std::cout << "float: ";
        std::cout << std::setprecision(precision) << std::fixed << scalar.convertToFloat(value) << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
