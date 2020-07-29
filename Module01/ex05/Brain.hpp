/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:39:19 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/07/29 11:19:07 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_
# include <iostream>
# include <string>
# include <sstream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		std::string identify(void);
		std::string addr;
};

#endif
