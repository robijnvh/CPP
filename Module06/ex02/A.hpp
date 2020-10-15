/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 13:16:58 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/29 12:39:21 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _A_HPP_
# define _A_HPP_
# include "Base.hpp"

class A : public Base {
    
    public:
        A(void);
        A(const A &obj);
        A    &operator= (const A &obj);
        virtual ~A(void);
};

#endif
