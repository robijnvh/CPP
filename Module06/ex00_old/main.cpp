/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:19:28 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/10/01 16:11:34 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "ScalarConversion.hpp"
#include "unistd.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "wrong number of arguments\n", 26);
    else
    {
        std::string     input(argv[1]);
        ScalarConv      output;
        
        try {
            output.convert(input);
        }
        catch (std::invalid_argument &e) {
            std::cerr << e.what() << std::endl;
            return (1);
        }
        std::cout.precision(1);
        std::cout.setf(std::cout.fixed);
        output.printConverted();
    }
    return (0);
}
