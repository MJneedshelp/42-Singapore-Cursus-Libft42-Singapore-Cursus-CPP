/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 09:51:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "\n=======01. Basic ShrubberyCreationForm Tests=======" << std::endl;

	Bureaucrat				b1("Jim", 137);
	ShrubberyCreationForm	f1("YourHead");

	std::cout << "b1: " << b1 << std::endl;
	std::cout << "f1: " << f1 << std::endl;

	std::cout << "\n=======01a. ShrubberyCreationForm - Execution=======" << std::endl;
	b1.signForm(f1);
	std::cout << "f1: " << f1 << std::endl;
	f1.execute(b1);

	std::cout << "\n=======01b. ShrubberyCreationForm - Throw Signature=======" << std::endl;
	ShrubberyCreationForm	f2("HisHead");
	std::cout << "f2: " << f2 << std::endl;
	b1.executeForm(f2);

	std::cout << "\n=======01c. ShrubberyCreationForm - Throw Exe Grade=======" << std::endl;
	Bureaucrat				b2("Pam", 145);
	ShrubberyCreationForm	f3("TheirHead");

	std::cout << "b2: " << b2 << std::endl;
	std::cout << "f3: " << f3 << std::endl;
	b2.signForm(f3);
	std::cout << "f3: " << f3 << std::endl;
	b2.executeForm(f3);

	std::cout << "\n=======02. Basic RobotomyRequestForm Tests=======" << std::endl;

	Bureaucrat				b3("Michael", 45);
	RobotomyRequestForm		f4("Dwight");

	std::cout << "b3: " << b3 << std::endl;
	std::cout << "f4: " << f4 << std::endl;

	std::cout << "\n=======02a. RobotomyRequestForm - Execution=======" << std::endl;
	b3.signForm(f4);
	std::cout << "f4: " << f4 << std::endl;
	f4.execute(b3);

	std::cout << "\n=======02b. RobotomyRequestForm - Throw Signature=======" << std::endl;
	RobotomyRequestForm		f5("Angela");
	std::cout << "f5: " << f5 << std::endl;
	b3.executeForm(f5);

	std::cout << "\n=======02c. RobotomyRequestForm - Throw Exe Grade=======" << std::endl;
	Bureaucrat				b4("Andy", 72);
	RobotomyRequestForm		f6("Toby");

	std::cout << "b4: " << b4 << std::endl;
	std::cout << "f6: " << f6 << std::endl;
	b4.signForm(f6);
	std::cout << "f6: " << f6 << std::endl;
	b4.executeForm(f6);

	std::cout << "\n=======03. Basic PresidentialForm Tests=======" << std::endl;

	Bureaucrat				b5("Darryl", 1);
	PresidentialPardonForm	f7("Creed");

	std::cout << "b5: " << b5 << std::endl;
	std::cout << "f7: " << f7 << std::endl;

	std::cout << "\n=======03a. PresidentialPardonForm - Execution=======" << std::endl;
	b5.signForm(f7);
	std::cout << "f7: " << f7 << std::endl;
	f7.execute(b5);

	std::cout << "\n=======03b. PresidentialPardonForm - Throw Signature=======" << std::endl;
	PresidentialPardonForm	f8("Gabe");
	std::cout << "f8: " << f8 << std::endl;
	b5.executeForm(f8);

	std::cout << "\n=======03c. PresidentialPardonForm - Throw Exe Grade=======" << std::endl;
	Bureaucrat				b6("Jan", 24);
	PresidentialPardonForm	f9("Kevin");

	std::cout << "b6: " << b6 << std::endl;
	std::cout << "f9: " << f9 << std::endl;
	b6.signForm(f9);
	std::cout << "f9: " << f9 << std::endl;
	b6.executeForm(f9);

	std::cout << "\n==========Destructor Test==========" << std::endl;

	return (0);
}
