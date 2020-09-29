/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:30 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:23:28 by rvan-hou      ########   odam.nl         */
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

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = num << literal;
    return ;
}

Fixed::Fixed(const float num)
{
	std::cout << num << std::endl;
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point= roundf(num * (1 << literal));
	std::cout << this->fixed_point << std::endl;
    return ;
}

Fixed&  Fixed::operator= (const Fixed &overload){
    std::cout << "Assignation operator overload" << std::endl;
    this->fixed_point = overload.getRawBits();
    return *this;
}

std::ostream&	operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}

int     Fixed::getRawBits(void) const{
    std::cout << "Get Bits" << std::endl;
    return this->fixed_point;
}

void	Fixed::setRawBits(int const raw){
    std::cout << "Set with S Bits" << std::endl;
    this->fixed_point= raw;
}

int		Fixed::toInt(void) const
{
    return ((int)(this->fixed_point >> literal));
}

float Fixed::toFloat(void) const
{
	return ((float)(this->fixed_point) / (1 << literal));
}
