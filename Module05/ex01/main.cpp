/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:25:09 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/03 16:25:11 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	check(Bureaucrat test, int min, int max)
{
    try
    {
        test.setGrade(min);
        for(int i = min; i <= max; i++)
        {
            // test.incrementGrade();
            test.decrementGrade();
            std::cout << test.getGrade() << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int	main(void)
{
    // Bureaucrat    test(10, "Me");
    Bureaucrat    test(140, "Me");	

    check(test, test.getGrade(), 150);
    return (0);
}