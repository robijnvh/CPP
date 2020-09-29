/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:39:09 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/09/29 11:11:22 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream ss;

	ss << (void *)this;
	this->addr = ss.str();
}

Brain::~Brain(void) {}

std::string	Brain::identify(void)
{
	return (this->addr);
}
