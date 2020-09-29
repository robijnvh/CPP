/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:20:05 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/23 14:51:37 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_
# include <string>
# include <iostream>
# include <stdexcept>

template <typename T>
class Array {
  T   **_array;
  int _len;
  
  public:
    Array(void);
    Array(int n);
    Array(const Array<T> &obj);
    Array &operator=(const Array &obj);
    T &operator[](int i);
    ~Array(void);
    int getSize(void);
};

#endif