/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:07:23 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 12:18:57 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _UTILS_HPP_
# define _UTILS_HPP_
# include "ScalarConversion.hpp"
# include <cctype>
# include <cstring>

int          findPrecision(char *str);
void         checkForChar(ScalarConv scalar, double value);
void         checkForInt(ScalarConv scalar, double value);
void         checkForDouble(ScalarConv scalar, double value, int precision);
void         checkForFloat(ScalarConv scalar, double value, int precision);

#endif