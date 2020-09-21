/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 11:19:28 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 12:18:37 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "utils.hpp"
#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
    double              value;
    int                 precision;
    ScalarConv          scalar;

    for (int i = 1; i < argc; i += 1)
    {
        std::cout << "string : " << argv[i] << std::endl;
        precision = findPrecision(argv[i]);
        value = atof(argv[i]);
        checkForChar(scalar, value);
        checkForInt(scalar, value);
        checkForDouble(scalar, value, precision);
        checkForFloat(scalar, value, precision);
        std::cout << std::endl;
    }
    return (0);
}