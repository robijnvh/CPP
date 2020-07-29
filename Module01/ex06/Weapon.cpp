/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 11:26:28 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/07/29 11:32:08 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {};

Weapon::~Weapon(void) {};

void	Weapon::setType(std::string str)
{
	this->_type = str;
}

const std::string Weapon::getType(void)
{
	return (this->_type);
}