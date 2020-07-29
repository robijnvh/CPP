/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:40:40 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/07/29 11:10:47 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {};

Human::~Human(void) {};

Brain	Human::getBrain(void)
{
	return (this->_brain);
}

std::string	Human::identify(void)
{
	return (this->_brain.identify());
}