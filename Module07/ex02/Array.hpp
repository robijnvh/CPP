/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:20:05 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/23 13:44:25 by robijnvanho   ########   odam.nl         */
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
    Array<T>(void);
    Array<T>(int n);
    Array<T>(const Array<T> &obj);
    Array <T>&operator=(const Array<T> &obj);
    T &operator[](int i);
    ~Array<T>(void);
    int getSize(void);
    
    // class   OutOfBoundsException : public std::exception  {
	  //   public:
		//     OutOfBoundsException(void);
		//     OutOfBoundsException(const OutOfBoundsException &obj);
		//     ~OutOfBoundsException(void) throw();
		//     OutOfBoundsException  &operator=(const OutOfBoundsException &obj);
		//     const char* what() const throw();
	  // };
};

#endif