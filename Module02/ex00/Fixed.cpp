/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:27:17 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:21:23 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default" << std::endl;
    this->fixed_point = 0;
}

Fixed::~Fixed(void){
    std::cout << "Destructor" << std::endl;
}

Fixed::Fixed(const Fixed &object){
    std::cout << "Copy constructor" << std::endl;
    *this = object;
}

Fixed&  Fixed::operator= (const Fixed &overload){
    std::cout << "Assignation operator overload" << std::endl;
    this->fixed_point = overload.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const{
    std::cout << "Get Bits" << std::endl;
    return this->fixed_point;
}

void	Fixed::setRawBits(int const raw){
    std::cout << "Set with S Bits" << std::endl;
    this->fixed_point= raw;
}
