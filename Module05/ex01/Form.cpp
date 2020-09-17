/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 10:05:50 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/17 12:29:42 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _signed(false), _gradeToSign(1), _gradeToExec(1), _name("empty") { return ; }

Form::Form(const Form &obj) : _signed(obj._signed), _gradeToSign(obj._gradeToSign), _gradeToExec(obj._gradeToExec), _name(obj._name)
{
    *this = obj;
    return ;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _signed(false), _gradeToSign(grade_to_sign), _gradeToExec(grade_to_execute), _name(name)
{
    if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
    {
        throw Form::GradeTooLowException();
    }
    return ;
}

Form::~Form(void) { return ; }

Form	&Form::operator= (const Form &obj)
{
	if (this != &obj)
    {
        *this = obj;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
	out << "Form " << rhs.getName() << " -> sign " << rhs.getGradeToSign()
		<< ": exec " << rhs.getGradeToExec();
	return out;
}

std::string				Form::getName(void) const	{ return this->_name; }
int 					Form::getGradeToSign(void) const { return this->_gradeToSign; }
int 					Form::getGradeToExec(void) const { return this->_gradeToExec; }
bool 					Form::getSigned(void) const { return this->_signed; }

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;
}

Form::GradeTooHighException::GradeTooHighException(void) { return ; }

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
    return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() { return ; }

Form::GradeTooHighException	&Form::GradeTooHighException::operator= (const GradeTooHighException &)
{

    return (*this);
}

const char	*Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high...");
}


Form::	GradeTooLowException::GradeTooLowException(void) { return ; }

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
	*this = obj;
    return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() { return ; }

Form::GradeTooLowException	&Form::GradeTooLowException::operator= (const GradeTooLowException &)
{
    return (*this);
}

const char	*Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low...");
}