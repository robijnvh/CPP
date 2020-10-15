/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 12:26:03 by rvan-hou      #+#    #+#                 */
/*   Updated: 2020/09/29 12:31:31 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include <sys/time.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		virtual ~RobotomyRequestForm(void);
	    RobotomyRequestForm	&operator= (const RobotomyRequestForm &obj);
		virtual void execute(Bureaucrat const &executor) const;
};

#endif
