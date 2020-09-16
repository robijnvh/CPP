/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:54:55 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/16 12:25:52 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm(void) {return ; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation Form", 145, 137, target) { return ; }
		
		
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { return ; }

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
	this->Form::setTarget(obj.Form::getTarget());
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream fout;

	Form::execute(executor);
	fout.open((this->Form::getTarget() + "_shrubbery").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (fout.fail())
	{
		std::cerr << "ShrubberyCreationForm: Error to open file" << std::endl;
		return;
	}
	fout << "          /\\          " << std::endl;
	fout << "         /  \\         " << std::endl;
	fout << "        /    \\        " << std::endl;
	fout << "       /      \\       " << std::endl;
	fout << "      /        \\      " << std::endl;
	fout << "     /          \\     " << std::endl;
	fout << "    /            \\    " << std::endl;
	fout << "   /              \\   " << std::endl;
	fout << "  /                \\  " << std::endl;
	fout << " /                  \\ " << std::endl;
	fout << "/                    \\" << std::endl;
	fout << "-----------------------" << std::endl;
	fout << "         |   |         " << std::endl;
	fout << "         |   |         " << std::endl;
	fout << "         -----         " << std::endl;
	fout.close();
}
