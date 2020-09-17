/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:24:25 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/17 12:36:02 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    this->_name = "empty";
    this->_grade = 1;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
      this->_name = name;
      this->_grade = grade;
    }
    return ;
}

Bureaucrat::~Bureaucrat(void) { return ;}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->_name  = obj._name;
        this->_grade = obj._grade;
    }
    return (*this);
}

Bureaucrat::	GradeTooLowException::GradeTooLowException(void) { return ;}

Bureaucrat::	GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
    return ;
}

Bureaucrat::	GradeTooLowException::~GradeTooLowException(void) throw() { return ;}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &obj)
{
    static_cast <void> (obj);
    return (*this);
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low...");
}

Bureaucrat::	GradeTooHighException::GradeTooHighException(void)	{ return ;}

Bureaucrat::	GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
    return ;
}

Bureaucrat::	GradeTooHighException::~GradeTooHighException(void) throw() { return ;}

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &obj)
{
    static_cast <void> (obj);
    return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high...");
}

void	Bureaucrat::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    return ;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getGradeToSign() < this->_grade)
	{
		std::cerr << this->_name << " can't sign " << form.getName()
				  << " because Bureaucrat grade too low" << std::endl;
	}
	else if (form.getSigned())
	{
		std::cerr << this->_name << " can't sign " << form.getName()
				  << " because Form is already signed" << std::endl;
	}
	else
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
}

void	Bureaucrat::incrementGrade(void)
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= 1;
    return ;
}

void	Bureaucrat::decrementGrade(void)
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += 1;
    return ;
}

std::string	Bureaucrat::getName(void) const
{
    return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

std::ostream	&operator<< (std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", Bureaucrat grade " << obj.getGrade() \
        << std::endl;
    return (out);
}

void Bureaucrat::executeForm(Form const &form)
{
	if (form.getGradeToExec() < this->_grade)
	{
		std::cerr << this->_name << " can't execute " << form.getName()
				  << " because Bureaucrat grade too low" << std::endl;
	}
	else if (!form.getSigned())
	{
		std::cerr << this->_name << " can't execute " << form.getName()
				  << " because Form is not signed" << std::endl;
	}
	else
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
}