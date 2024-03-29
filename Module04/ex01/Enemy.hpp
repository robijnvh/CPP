/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 15:23:43 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/08/07 10:33:11 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ENEMY_HPP_
# define _ENEMY_HPP_
# include <iostream>
# include <string>

class Enemy	{
	protected:
		int			_hp;
		std::string _type;
	
	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &obj);
    	Enemy    &operator=(Enemy const &obj);
		virtual ~Enemy();
		std::string	const&	getType() const;
		int				getHP() const;
		virtual void	takeDamage(int);
};

#endif
