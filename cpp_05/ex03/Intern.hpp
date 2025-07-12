/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:04:39 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 18:13:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		~Intern(void);

		/* Public member function */
		AForm	*makeForm(std::string type, std::string target);


	private:
		/* Unused OCF class members - no use case for copy constructor or
		   assignment operator since there is nothing unique about each intern
		   to copy; functionally the same as the default constructor */
		Intern(Intern const &src);
		Intern&	operator=(Intern const &inst);


};












#endif

