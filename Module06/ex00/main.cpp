/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 10:44:44 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/15 10:54:12 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <math.h>
#include <climits>

void    ft_convert(char *str)
{
    std::string     res;
    double          d;
    int             i = 0;
    int             size = 0;

    while (str[i] && std::isspace(str[i]))
        i++;
    while (str[ i + size] && !std::isspace(str[i + size]))
        size++;
    res = std::string(str, i, size);
    if (res.length() == 1 && std::isprint(res[0]) && !std::isdigit(res[0]))
        d = res[0];
    else
    {
        try
        {
            d = std::stod(res);
        }
        catch(const std::exception& e)
        {
			std::cout << "No conversion found..." << std::endl;
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: mpossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
        }
    }
    std::cout << "char: " 
    
    
    
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong input... Please give: ./convert <number>" << std::endl;
		return (1);
	}
	ft_convert(argv[1]);
	return (0);
}