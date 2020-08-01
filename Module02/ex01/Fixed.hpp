/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:32 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/01 10:10:07 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	int                 fixed_point;
	static const int	literal = 8;
	
  public:
  	Fixed(void);
	Fixed(const Fixed &other);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	Fixed&				operator= (const Fixed &overload);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int                 toInt(void) const;
};

std::ostream            &operator<<(std::ostream &out, Fixed const &in);

#endif