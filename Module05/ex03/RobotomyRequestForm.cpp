/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:27:02 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:32:27 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request Form", 72, 45, target)
{ 
	timeval t;

	gettimeofday(&t, NULL);
	srand(t.tv_usec);
}
		
		
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj)
{
	timeval t;

	gettimeofday(&t, NULL);
	srand(t.tv_usec);
}

RobotomyRequestForm::~RobotomyRequestForm(void) { return ; }

RobotomyRequestForm	&RobotomyRequestForm::operator= (const RobotomyRequestForm &obj)
{
	this->Form::setTarget(obj.Form::getTarget());
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "........ ";
	if (rand() % 2 == 1)
		std::cout << this->Form::getTarget() << " has been robotomized successfully!"<< std::endl;
	else
		std::cout << this->Form::getTarget() << " failed to be robotomized" << std::endl;
}
