/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:51:34 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/07/28 09:52:07 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct   convert
{
    void operator()(char& c) 
    {
        c = toupper(c);
    }
};

int     main(int argc, char **argv)
{
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"; 
        return 0;
    };
    for (int i = 1; i < argc; ++i)
    {
        std::string data = argv[i];
        std::for_each(data.begin(), data.end(), convert());
        std::cout << data;
    };
    std::cout << "\n";
    return 0;
}
