/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 15:26:14 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/08/06 15:35:34 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
	std::cout << "Enemy constructor called (with args)" << std::endl;	
}

Enemy::Enemy(const Enemy &obj)
{
	*this = obj;
}

Enemy&	Enemy::operator=(Enemy const &obj)
{
    _hp= obj._hp;
    return (*this);
}  

Enemy::~Enemy()
{
	std::cout << "Enemy destructor called" << std::endl;
}
