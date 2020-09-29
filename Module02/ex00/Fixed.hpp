/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:27:15 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:21:26 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <string>

class Fixed {

	int					fixed_point;
	static const int	literal = 8;

  public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &object);
	Fixed&				operator= (const Fixed &overload);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};

#endif
