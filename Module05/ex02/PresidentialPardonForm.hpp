/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:30:56 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/16 12:32:29 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		virtual ~PresidentialPardonForm(void);
	    PresidentialPardonForm	&operator= (const PresidentialPardonForm &obj);
		virtual void execute(Bureaucrat const &executor) const;
};

#endif