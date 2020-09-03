/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 16:24:42 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/09/03 16:24:49 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_
# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat {
	int			_grade;
	std::string	_name;
	
	public:
		class GradeTooHighException : public std::exception {
			public:
        		GradeTooHighException(void);
        		GradeTooHighException(const GradeTooHighException &src);
        		virtual ~GradeTooHighException(void) throw();
        		GradeTooHighException  &operator= (const GradeTooHighException &obj);
        		virtual const char    *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
        		GradeTooLowException(void);
        		GradeTooLowException(const GradeTooLowException &src);
        		virtual ~GradeTooLowException(void) throw();
        		GradeTooLowException  &operator= (const GradeTooLowException &obj);
        		virtual const char    *what() const throw();
		};
		Bureaucrat(void);
		Bureaucrat(int, std::string);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat	&operator=(Bureaucrat const &obj);
		virtual ~Bureaucrat(void);
		// void		GradeTooHighException(void);
		// void		GradeTooLowException(void);
		int			getGrade(void) const;
		std::string	getName(void) const;
		void        incrementGrade(void);
    	void        decrementGrade(void);
    	void        setGrade(int);
    	void 		setName(std::string);
};

std::ostream&	operator<< (std::ostream &out, Bureaucrat const &s);

#endif