/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 16:25:09 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/09/17 12:34:37 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void form_test()
{
	try
	{
		Form form("Project_A", -3, 120); // high
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form form("Project_A", 7, 170); //low
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
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
	Jack.signForm(form);
	Grace.signForm(form);
	Jack.signForm(form);
}

int main(void)
{
	std::cout << "Form constructor with invalid grade test" << std::endl;
	form_test();
	std::cout << std::endl;
	std::cout << "Bureaucrat signForm() test" << std::endl;
	signForm_test();
	return 0;
}