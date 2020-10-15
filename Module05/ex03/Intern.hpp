/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:25:31 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/17 13:36:30 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_HPP_
# define _INTERN_HPP_

# include <string>
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

struct Type
{
	std::string _type;
	Form *(*make)(std::string);
};

class Intern {

	public:	
		Intern(void);
		Intern(const Intern &obj);
		Intern	&operator=(Intern const &obj);
		~Intern(void);
		Form	*makeForm(std::string , std::string );
};

#endif
