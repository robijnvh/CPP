/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 10:40:53 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/07/29 11:17:29 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_
# include "Brain.hpp"

class Human {
	Brain _brain;

	public:
	Human(void);
	~Human(void);
	Brain	getBrain(void);
	std::string	identify(void);
};

#endif
