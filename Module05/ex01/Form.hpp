/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 09:54:57 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:30:25 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	bool                      _signed;
    const int                 _gradeToSign;
    const int                 _gradeToExec;
    const std::string         _name;

	public:
		class GradeTooHighException : public std::exception
	    {
		    public:
		        GradeTooHighException(void);
		        GradeTooHighException(const GradeTooHighException &obj);
		        virtual ~GradeTooHighException(void) throw();
		        GradeTooHighException &operator= (const GradeTooHighException &obj);
		        virtual const char    *what() const throw();
	    };

	    class GradeTooLowException : public std::exception
	    {
		    public:
		        GradeTooLowException(void);
		        GradeTooLowException(const GradeTooLowException &obj);
		        virtual ~GradeTooLowException(void) throw();
		        GradeTooLowException  &operator= (const GradeTooLowException &obj);
		        virtual const char    *what() const throw();
	    };

	    Form(void);
	    Form(const Form &obj);
	    Form(std::string name, int gradeToSign, int gradeToExec);
	    ~Form(void);
	    Form                      &operator= (const Form &obj);
	    void                      beSigned(Bureaucrat &bureaucrat);
	    bool                      getSigned(void) const;
	    int                       getGradeToSign(void) const;
	    int                       getGradeToExec(void) const;
	    std::string               getName(void) const;
};

std::ostream                  &operator<< (std::ostream &out, const Form &obj);

#endif
