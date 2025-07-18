/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:32 by mintan            #+#    #+#             */
/*   Updated: 2025/07/18 20:20:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	AForm(RRF_NAME, RRF_SIGN_GRADE, RRF_EXE_GRADE),	_target(target)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Beep! Boop! Beep!" << std::endl;
}

/* Description: function to create a file with trees inside */
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->checkExeSign();
	this->checkExeGrade(executor);
	this->_robotomise();
}

/* Helper functions */
void	RobotomyRequestForm::_robotomise(void) const
{
	long	randVal;

	srand(time(0));
	randVal = rand();
	std::cout << "Zhhiiiiiing! Clack! Clock!" << std::endl;
	if (randVal <= RAND_MAX / 2)
		std::cout << "[Pneumatic hissing] YOU ARE NOW A ROBOT: " << \
		this->_target << std::endl;
	else
		std::cout << "[Ba dum tss] You're still human: " << \
		this->_target << std::endl;
}
