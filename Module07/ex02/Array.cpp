/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:22:39 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/23 13:47:39 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void): _array(NULL), _len(0)
{
    return ;
}

template <typename T>
Array<T>::Array(int n) : _array(NULL), _len(n)
{
		_array = new T*[n];
		for (int i = 0; i < _len; i++)
			_array[i] = new T();
}

template <typename T>
Array<T>::Array(const Array<T> &obj)
{
    *this = obj;
    return ;
}

template <typename T>
Array<T>   &Array<T>::operator=(const Array<T> &obj)
{
    _len = obj.getSize();
    T *a = new T*[_len];
    for (int i = 0; i < _len; i++)
    	a[i] = new T(obj[i]);
    return (*this);
}

template <typename T>
Array<T>::~Array<T>(void)
{
	for (int i = 0; i < _len; i++)
		delete _array[i];
	delete [] _array;
}

template <typename T>
T   &Array<T>::operator[](int i)
{
	if (i >= _len)
		throw OutOfBoundsException();
	return (*_array[i]);
}

template <typename T>
int	Array<T>::getSize(void)
{
   return (_len);
}

// template <typename T>
// Array<T>::OutOfBoundsException::OutOfBoundsException(void)
// {
//     return ;
// }

// template <typename T>
// Array<T>::OutOfBoundsException::OutOfBoundsException(const OutOfBoundsException &obj)
// {
//     *this = obj;
//     return ;
// }

// template <typename T>
// Array<T>::OutOfBoundsException::~OutOfBoundsException(void) throw()
// {
//     return ;
// }

// template <typename T>
// Array<T>::OutOfBoundsException  &Array<T>::OutOfBoundsException::operator=(const Array<T>::OutOfBoundsException &obj)
// {
//     if (obj)
//         *this = obj;
//     return (*this);
// }

// template <typename T>
// const char*     Array<T>::OutOfBoundsException::what() const throw()
// {
//     return ("index out of bounds");
// }