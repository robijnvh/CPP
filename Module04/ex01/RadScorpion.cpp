/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:33:49 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/07 10:35:59 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &obj): Enemy(obj)
{
	std::cout << "* click click click *" << std::endl;
};

RadScorpion&	RadScorpion::operator=(RadScorpion const &obj)
{
	Enemy::operator=(obj);
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;	
}