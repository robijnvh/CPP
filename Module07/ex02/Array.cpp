/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:22:39 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/23 14:54:41 by rvan-hou      ########   odam.nl         */
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
	if (&obj == this)
		return *this;
	if (this->getSize() != obj.getSize())
	{
		if (this->_array != NULL)
			delete [] this->_array;
		this->_array = new T[obj.getSize()];
	}
	this->_n = obj.getSize();
	for (size_t i = 0; i < obj.getSize(); i++)
		this->_array[i] = obj._array[i];
	return *this;
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
	if (!this->_array || i < 0 || i >= this->_len)
		throw std::exception();
	return this->_array[i];
}

template <typename T>
int	Array<T>::getSize(void)
{
   return (_len);
}