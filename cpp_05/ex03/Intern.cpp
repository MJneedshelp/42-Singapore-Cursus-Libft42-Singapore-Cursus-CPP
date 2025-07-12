/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:25:24 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 20:37:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const	std::string	Intern::formTypes[] =
{
	"ShrubberyCreationForm",
	"RobotomyRequestForm",
	"PresidentialPardonForm"
};

const	int	Intern::noFormTypes =
	sizeof(Intern::formTypes) / sizeof(Intern::formTypes[0]);

Intern::Intern(void)
{
	return;
}

Intern::~Intern(void)
{
	std::cout << "Lowest lifeform in the company...exterminated" << std::endl;
	return;
}

AForm*	Intern::makeForm(std::string type, std::string target)
{
	int		idxMatch;
	AForm	*form;

	idxMatch = -1;
	for(int i = 0; i < Intern::noFormTypes; ++i)
	{
		if (Intern::formTypes[i].compare(type) == 0)
		{
			idxMatch = i;
			std::cout << "Intern creates: " << Intern::formTypes[idxMatch] << std::endl;
			break;
		}
	}
	switch(idxMatch)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			form = NULL;
			std::cout << "This is not within my job scope" << std::endl;
			break;
	}
	return (form);
}
