/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 09:51:34 by robijnvanho       #+#    #+#             */
/*   Updated: 2020/07/28 13:00:01 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		
		for (int i2 = 0; i2 < (int)str.size(); i2++)
			str[i2] = toupper(str[i2]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
