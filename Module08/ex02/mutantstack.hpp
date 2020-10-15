/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 11:31:14 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/10/14 12:35:41 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_
# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(const MutantStack &obj) : std::stack<T>()
        {
            *this = obj;
        }
        MutantStack		&operator=(const MutantStack &obj) 
        {
	        std::stack<T>::operator = (obj);
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        iterator	            begin() { return this->c.begin(); }
        iterator	            end() { return this->c.end(); }
        const_iterator          begin() const { return this->c.begin(); }
        const_iterator          end() const { return this->c.end(); }
        reverse_iterator	    rev_begin() { return this->c.rbegin(); }
        reverse_iterator	    rev_end() { return this->c.rend(); }
        const_reverse_iterator	rev_begin() const { return this->c.rbegin(); }
        const_reverse_iterator	rev_end() const { return this->c.rend(); }
        // c is underlying container which is protected
};

#endif
