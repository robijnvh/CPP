/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 10:26:53 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 11:10:34 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;
	
	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;
	return (0);
}
