/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 15:08:02 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/13 10:44:57 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator res;
	res = std::find(container.begin(), container.end(), n);

	if (res == container.end())
		throw std::exception();
	return res;
}

#endif
