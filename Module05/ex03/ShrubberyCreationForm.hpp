/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:51:45 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/17 12:39:08 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		virtual ~ShrubberyCreationForm(void);
	    ShrubberyCreationForm	&operator= (const ShrubberyCreationForm &obj);
		virtual void execute(Bureaucrat const &executor) const;
};

#endif