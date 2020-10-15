/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 10:52:02 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/14 14:56:35 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
    
Span::Span(unsigned int n) : _n(n)
{  
}

Span::~Span(void)
{
}

Span::Span(const Span &obj)
{
    _data = obj._data;
    _n = obj._n;
}

Span& Span::operator=(const Span &obj)
{
    _data = obj._data;
    _n = obj._n;
    return (*this);
}

void    Span::addNumber(unsigned int n)
{
    if (_data.size() < _n)
		_data.push_back(n);
	else
		throw std::exception();
}

unsigned int     Span::shortestSpan(void)
{
    unsigned int span;
    unsigned int tmp;

    if (_n <= 1)
        throw std::exception();
    
    std::sort(_data.begin(), _data.end());
    std::vector<int>::iterator  it = ++_data.begin();
    span = *it - *(it - 1);
    it++;
    while (it != _data.end())
    {
        tmp = *it - *(it - 1);
        span = (tmp < span ? tmp : span);
        ++it;
    }
    return span;
}

unsigned int     Span::longestSpan(void)
{
    if (_n <= 1)
        throw std::exception();
    int span = *std::max_element(_data.begin(), _data.end()) -
    *std::min_element(_data.begin(), _data.end());
    return span;
}
