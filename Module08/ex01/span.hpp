/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 10:52:04 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/14 14:55:53 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_
# include <vector>
# include <exception>
# include <algorithm>
# include <cstdlib>

class Span {
    unsigned int    _n;
    std::vector<int> _data;
	Span();
    
    public:
        Span(unsigned int n);
        virtual ~Span(void);
        Span(const Span &obj);
        Span& operator=(const Span &obj);
        void    addNumber(unsigned int n);
        template <typename T>
        void    addNumbers(T begin, T end)
        {
		    if (std::distance(begin, end) + this->_data.size() > this->_n)
			    throw std::runtime_error("Too many numbers");
            this->_data.insert(this->_data.end(), begin, end);
        }
        unsigned int     shortestSpan(void);
	    unsigned int     longestSpan(void);
};

#endif
