/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 15:56:34 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/07/29 17:02:21 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_
# include <iostream>
# include <string>

class Fixed {
	int					fixed_pv;
	static const int	nb_bits;

	public:
		Fixed(void); //default constructor
		Fixed(const Fixed &obj); // copy constructor
		~Fixed(); // destructor
};

#endif
