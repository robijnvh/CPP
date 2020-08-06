/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:58:40 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 15:21:11 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main(void)
{
	AWeapon *one = new PlasmaRifle();
	AWeapon *two = new PowerFist();
	std::cout << "--------" << std::endl;
	std::cout << one->getName() << std::endl;
	one->attack();
	std::cout << "--------" << std::endl;
	std::cout << two->getName() << std::endl;
	two->attack();
	std::cout << "--------" << std::endl;
	delete one;
	return (0);
}