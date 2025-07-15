/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 16:24:57 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include <fstream>
#include <string>
#include <bits/stdc++.h>

#define RRF_NAME "RANDOMROBOT"
#define RRF_SIGN_GRADE 72
#define RRF_EXE_GRADE 45

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm(void);

		/* Member Functions */
		void	execute(Bureaucrat const &executor) const;

	private:
		std::string	_target;
		void		_robotomise(void) const;

		/* Unused OCF class members - No use case since signatures should
		   not be copied */
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &inst);
};

#endif
