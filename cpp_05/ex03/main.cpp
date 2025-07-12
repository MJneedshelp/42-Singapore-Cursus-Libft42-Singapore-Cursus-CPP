/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 20:38:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "\n=======01. Form Creation=======" << std::endl;
	Intern	ryan;
	AForm	*f1;
	AForm	*f2;
	AForm	*f3;
	AForm	*f4;

	f1 = ryan.makeForm("ShrubberyCreationForm", "Kelly");
	f2 = ryan.makeForm("RobotomyRequestForm", "Andy");
	f3 = ryan.makeForm("PresidentialPardonForm", "Creed");
	f4 = ryan.makeForm("UnlimitedLeaveRequest", "Michael");

	std::cout << "f1 address: " << f1 << std::endl;
	std::cout << "f2 address: " << f2 << std::endl;
	std::cout << "f3 address: " << f3 << std::endl;
	std::cout << "f4 address: " << f4 << std::endl;

	std::cout << "\n=======02. Form Signing and Execution=======" << std::endl;
	Bureaucrat	b1("AsstMgr", 2);

	b1.signForm(*f1);
	b1.signForm(*f2);
	b1.signForm(*f3);

	b1.executeForm(*f1);
	b1.executeForm(*f2);
	b1.executeForm(*f3);

	std::cout << "\n=======03. Form Destruction=======" << std::endl;
	delete (f1);
	delete (f2);
	delete (f3);

	return (0);
}
