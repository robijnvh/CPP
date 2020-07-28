/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:24:42 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/07/28 13:28:51 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;
	delete panther;
}

// int main(void)
// {
// 	memoryLeak();
// 	while(1);
// 	return (0);
// }