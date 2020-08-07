/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:22:14 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/08/07 11:03:08 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERMUTANT_HPP_
# define _SUPERMUTANT_HPP_
# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy {
	
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant &obj);
	    SuperMutant    &operator=(SuperMutant const &obj);
		virtual ~SuperMutant();
		void	takeDamage(int);
};

#endif