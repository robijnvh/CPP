/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:13:09 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/05 18:35:46 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SORCERER_HPP_
# define _SORCERER_HPP_
# include <iostream>
# include <string>

class Sorcerer {
    std::string _name;
    std::string _title;
    // Sorcerer(void);
    public:
    Sorcerer() = delete;
    Sorcerer(std::string, std::string);
    Sorcerer(const Sorcerer &obj);
    Sorcerer    &operator=(Sorcerer const &obj);
    ~Sorcerer(void);
};

#endif