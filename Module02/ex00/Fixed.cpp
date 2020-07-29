/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 15:56:32 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/07/29 17:06:40 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixed_pv = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor allocating ptr." << std::endl;
	this->fixed_pv = obj.fixed_pv;
}

Fixed::~Fixed(void) {};

int	main(void)
{
	
}
