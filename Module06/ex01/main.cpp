/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:51:23 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 12:38:38 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

struct Data
{
    std::string s1;
    std::string s2;
    int         n;
};

void    *serialize(void)
{
    Data        *ret = new Data;
    static char alphanumericalChars[] = "abcdefghijklmnopqrstuvwxyz"
                                        "ABDEFGHIJKLMNOPQRSTUVWXYZ"
                                        "0123456789";
    
    for (int i = 0; i < 8; i++)
    {
        ret->s1 += alphanumericalChars[rand() % sizeof(alphanumericalChars)];
    }
    ret->n = rand() * (rand() & 1 ? 1 : -1);
    for (int i = 0; i < 8; i++)
    {
        ret->s2 += alphanumericalChars[rand() % sizeof(alphanumericalChars)];
    }
    return (ret);
}

Data    *deserialize(void *raw)
{
    Data    *ret = reinterpret_cast<Data*>(raw);
    return (ret);
}

int main(void)
{
    srand(time(0));
    void    *serial = serialize();
    Data    *deserial = deserialize(serial);

    std::cout << deserial->s1 << std::endl << deserial->n << std::endl << deserial->s2 << std::endl;
    delete deserial;
    return (0);
}
