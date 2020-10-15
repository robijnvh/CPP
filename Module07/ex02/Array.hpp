/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:20:05 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/02 13:46:09 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_H_
# define _ARRAY_H_
# include <iostream>
# include <stdexcept>

template < typename T >
class	Array {
		unsigned int	_n;
		T*				_array;
		
	public:
    // def constructor
		Array(void) : _n(0), _array(NULL) {
		}
    // constructor
		Array(unsigned int n) {
			this->_n = n;
			this->_array = new T[n];
		}
    // decontructor
		~Array(void) {
			delete [] this->_array;
		}
    // copy const
		Array(const Array &obj) {
			this->_n = obj._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = obj._array[i];
		}
    // operator
		Array& operator=(const Array &obj) {
			delete [] this->_array;
			this->_n = obj._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = obj._array[i];
			return (*this);
		}
    // functions
		unsigned int	size(void) const {
			return (this->_n);
		}
    // classes
		class OutOfLimitsException : public std::exception {
			public:
				OutOfLimitsException(void) {
				}
				OutOfLimitsException(const OutOfLimitsException &obj) {
					*this = obj;
				}
				OutOfLimitsException& operator=(const OutOfLimitsException &obj) {
					(void)obj;
					return (*this);
				}
				virtual const char* what() const throw() {
					return "Out of limits";
				}
				~OutOfLimitsException(void) throw() {
				}
		};
    // operator
		T& operator[](unsigned int i) const {
			if (i >= this->_n)
				throw OutOfLimitsException();
			return (this->_array[i]);
		}
};

#endif
