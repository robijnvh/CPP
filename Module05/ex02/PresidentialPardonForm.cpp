/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:31:32 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:31:24 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Shrubbery Creation Form", 25, 5, target) { return ; }
		
		
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) { return ; }

PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
	this->Form::setTarget(obj.Form::getTarget());
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->Form::getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
