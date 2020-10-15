/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:25:09 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:31:22 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat Jack(1, "Jack");
	Bureaucrat Grace(150, "Grace");
	ShrubberyCreationForm sForm("Billy");
	PresidentialPardonForm pForm("Billy");
	RobotomyRequestForm rForm("Billy");
	std::cout << "Form info:" << std::endl;
	std::cout << sForm;
	std::cout << pForm;
	std::cout << rForm;
	std::cout << std::endl;
	std::cout << "Form execute() tests:" << std::endl;
	try
	{
		pForm.execute(Jack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		pForm.execute(Grace);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Jack.signForm(pForm);
	Jack.executeForm(pForm);
	std::cout << std::endl;
	std::cout << "Bureaucrat executeForm() test:" << std::endl;
	Jack.executeForm(sForm);
	Grace.executeForm(sForm);
	Jack.signForm(sForm);
	Jack.signForm(pForm);
	Jack.signForm(rForm);
	Jack.executeForm(sForm);
	Jack.executeForm(pForm);
	Jack.executeForm(rForm);
	return 0;
}
