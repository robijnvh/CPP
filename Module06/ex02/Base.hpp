/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:13:41 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 14:21:46 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

class A;
class B;
class C;

class Base {
    public:
        Base(void);
        Base(const Base &obj);
        Base    &operator= (const Base &obj);
        virtual ~Base(void);
};

#endif
