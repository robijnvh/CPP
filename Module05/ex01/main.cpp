/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 16:25:09 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/09/16 11:45:00 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void form_test()
{
	try
	{
		Form form("Project_A", -1, 150);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form form("Project_A", 1, 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void beSigned_test()
{
	Form f("Project_A", 1, 20);
	Bureaucrat Jack(1, "Jack");
	Bureaucrat Grace(10, "Grace");

	try
	{
		f.beSigned(Jack); // signed
		f.beSigned(Grace); // too low exception
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void signForm_test()
{
	Form form("Project_A", 1, 20);
	std::cout << "1. form info" << std::endl;
	std::cout << form;
	std::cout << std::endl;
	std::cout << "2. Jack info" << std::endl;
	Bureaucrat Jack(1, "Jack");
	std::cout << Jack;
	std::cout << "3. Grace info" << std::endl;
	Bureaucrat Grace(150, "Grace");
	std::cout << Grace;

	std::cout << "4. signform" << std::endl;
	Jack.signForm(form); // signed
	Grace.signForm(form); // too low grade
	Jack.signForm(form); // already signed
}

int main(void)
{
	std::cout << "Form constructor with invalid grade test" << std::endl;
	form_test();
	std::cout << std::endl;
	std::cout << "Form beSigned() test" << std::endl;
	beSigned_test();
	std::cout << std::endl;
	std::cout << "Bureaucrat signForm() test" << std::endl;
	signForm_test();
	return 0;
}