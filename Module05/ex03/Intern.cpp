/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:25:28 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/17 13:48:28 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) { return ; }

Intern::Intern(const Intern &obj)
{
	*this = obj;
    return ;
}

Intern	&Intern::operator=(Intern const &obj)
{
	if (this != &obj)
    {
        *this = obj;
    }
	return (*this);
}

Intern::~Intern(void) { return ; }

Form *makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}
Form *makeRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}
Form *makePardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string type, std::string target)
{
	static struct Type types[3] = {
		{ "Shrubbery creation", makeShrubbery },
		{ "Robotomy request", makeRobotomy },
		{ "Presidential pardon", makePardon }
	};
	for (int i = 0; i < 3; i++)
	{
		if (types[i]._type == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			return types[i].make(target);
		}
	}
	std::cout << "Unknown form type: " << type << std::endl;
	return NULL;
}