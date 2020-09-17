/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:25:09 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/17 13:48:37 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;

	std::cout << "Intern makeForm() test:" << std::endl;
	Form *s = intern.makeForm("Shrubbery creation", "Jack");
	std::cout << *s;
	Form *p = intern.makeForm("Presidential pardon", "Jack");
	std::cout << *p;
	Form *r = intern.makeForm("Robotomy request", "Jack");
	std::cout << *r;
	Form *no = intern.makeForm("testtest", "Jack");
	if (!no)
		std::cout << "failed to create Form" << std::endl;
	std::cout << std::endl;
	std::cout << "Execute form:" << std::endl;
	Bureaucrat Grace(1, "Grace");
	Grace.signForm(*s);
	Grace.executeForm(*s);
	Grace.signForm(*p);
	Grace.executeForm(*p);
	Grace.signForm(*r);
	Grace.executeForm(*r);
	return 0;
}