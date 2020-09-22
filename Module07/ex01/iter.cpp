/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:05:09 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/22 16:16:20 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void    iter(T *arr, int len, void (*f)(T const &))
{
    if (arr)
    {
        for (int i = 0 ; i < len; i += 1)
        {
            if (f)
                f(arr[i]);
        }
    }
}


template <typename T>
void    printAll(T const &c)
{
    std::cout << c << " ";
    return ;
}

int main(void)
{
    int         numbers[] = {0, 7, 14, 17, 21, 24};
    std::string alpha[] = {"A", "B", "C", "D"};

    std::cout << "Alpha   : ";
    iter(alpha, 4, printAll);
    std::cout << std::endl;

    std::cout << "Numbers : ";
    iter <int>(numbers, 6, printAll);
    // iter <int>(numbers, 6, NULL);
    std::cout << std::endl;

    return (0);
}
