/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:24:32 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 14:31:13 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base    *generate(void)
{
    int     i;
    Base    *random;

    i = rand() % 3;
    if (i == 0)
    {
        std::cout << "Class A!" << std::endl;
        return (random = new A());
    }
    else if (i == 1)
    {
        std::cout << "Class B!" << std::endl;
        return (random = new B());
    }
    std::cout << "Class C!" << std::endl;
    return (random = new C());
}

void    identify_from_pointer(Base *p)
{
    A   *check_a = dynamic_cast<A*>(p);
    if (check_a)
    {
        std::cout << "Identified from pointer: A" << std::endl;
    }
    B   *Check_b = dynamic_cast<B*>(p);
    if (Check_b)
    {
        std::cout << "Identified from pointer: B" << std::endl;
    }
    C   *Check_c = dynamic_cast<C*>(p);
    if (Check_c)
    {
        std::cout << "Identified from pointer: C" << std::endl;
    }
}

void    identify_from_reference(Base &p)
{
    try
    {
        A   &check_a = dynamic_cast<A&>(p);
        std::cout << "Identified from reference: A" << std::endl;
        static_cast<void>(check_a);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast A" << std::endl;
    }
    try
    {
        B   &check_b = dynamic_cast<B &>(p);
        std::cout << "Identified from reference: B" << std::endl;
        static_cast<void>(check_b);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast B" << std::endl;
    }
    try
    {
        C   &check_c = dynamic_cast<C &>(p);
        std::cout << "Identified from reference: C" << std::endl;
        static_cast<void>(check_c);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast C" << std::endl;
    }
}

int main(void)
{
    srand(time(0));
    Base    *p = generate();

    identify_from_pointer(p);
    identify_from_reference(*p);
    return (0);
}