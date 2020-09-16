/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:25:09 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/16 12:39:35 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat tom(1, "tom");
	Bureaucrat jerry(150, "jerry");
	ShrubberyCreationForm sForm("James");
	PresidentialPardonForm pForm("James");
	RobotomyRequestForm rForm("James");

	std::cout << "Form info:" << std::endl;
	std::cout << sForm;
	std::cout << pForm;
	std::cout << rForm;

	std::cout << std::endl;

	std::cout << "Form execute() tests:" << std::endl;
	try
	{
		pForm.execute(tom); // not signed exception
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		pForm.execute(jerry); // grade too low exception
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	tom.signForm(pForm);
	tom.executeForm(pForm);

	std::cout << std::endl;

	std::cout << "Bureaucrat executeForm() test:" << std::endl;
	tom.executeForm(sForm); //  no signed before execute
	jerry.executeForm(sForm); // low grade

	tom.signForm(sForm);
	tom.signForm(pForm); // already signed above
	tom.signForm(rForm);

	tom.executeForm(sForm);
	tom.executeForm(pForm);
	tom.executeForm(rForm);
	return 0;
}