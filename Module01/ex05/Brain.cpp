/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 10:39:09 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/07/29 11:18:50 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::stringstream ss;

	ss << (void *)this;
	this->addr = ss.str();
};

Brain::~Brain(void) {};

std::string	Brain::identify(void)
{
	return (this->addr);
}