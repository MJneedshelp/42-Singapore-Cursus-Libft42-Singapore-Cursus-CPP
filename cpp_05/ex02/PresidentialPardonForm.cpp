/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:32 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 16:41:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	AForm(PPF_NAME, PPF_SIGN_GRADE, PPF_EXE_GRADE),	_target(target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Pan-Galactic Gargle Blaster 4" << std::endl;
}

/* Description: function to create a file with trees inside */
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExeSign();
	this->checkExeGrade(executor);
	this->_presidentialPardon();
}

/* Helper functions */
void	PresidentialPardonForm::_presidentialPardon(void) const
{
	std::cout << "[PLife is wasted on the living.] You are free: " << \
	this->_target << std::endl;
}
