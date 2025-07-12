/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 14:49:39 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"



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
	try
	{
		f2.execute(b1);
	}
	catch(const AForm::SignExeException &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=======01c. ShrubberyCreationForm - Throw Exe Grade=======" << std::endl;
	Bureaucrat				b2("Pam", 145);
	ShrubberyCreationForm	f3("TheirHead");

	std::cout << "b2: " << b2 << std::endl;
	std::cout << "f3: " << f3 << std::endl;
	b2.signForm(f3);
	std::cout << "f3: " << f3 << std::endl;
	try
	{
		f3.execute(b2);
	}
	catch(const AForm::GradeExeException &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=======02. Basic RobotomyRequestForm Tests=======" << std::endl;

	Bureaucrat				b3("Michael", 45);
	RobotomyRequestForm		f4("Dwight");

	std::cout << "b3: " << b3 << std::endl;
	std::cout << "f4: " << f4 << std::endl;

	std::cout << "\n=======01a. RobotomyRequestForm - Execution=======" << std::endl;
	b3.signForm(f4);
	std::cout << "f4: " << f4 << std::endl;
	f4.execute(b3);

	std::cout << "\n=======01b. RobotomyRequestForm - Throw Signature=======" << std::endl;
	RobotomyRequestForm		f5("Angela");
	std::cout << "f2: " << f2 << std::endl;
	try
	{
		f2.execute(b3);
	}
	catch(const AForm::SignExeException &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=======01c. RobotomyRequestForm - Throw Exe Grade=======" << std::endl;
	Bureaucrat				b4("Andy", 72);
	RobotomyRequestForm		f6("Toby");

	std::cout << "b4: " << b4 << std::endl;
	std::cout << "f6: " << f6 << std::endl;
	b4.signForm(f6);
	std::cout << "f6: " << f6 << std::endl;
	try
	{
		f6.execute(b4);
	}
	catch(const AForm::GradeExeException &e)
	{
		std::cerr << e.what() << '\n';
	}












	// Form	f1("B17", 42, 24);
	// Form	f2(f1);

	// std::cout << "[Memory Address f1]: " << &f1 << std::endl;
	// std::cout << "[Memory Address f2]: " << &f2 << std::endl;
	// std::cout << "f1: " << f1 << std::endl;
	// std::cout << "f2: " << f2 << std::endl;

	// std::cout << "\n==========Exception Test 1: Constructor - GradeTooHigh==========" << std::endl;
	// try
	// {
	// 	Form	f3("G17", 0, 24);
	// }
	// catch(const Form::GradeTooHighException &e)
	// {
	// 	std::cout << "Instantiating with gradeSign(0): " << e.what() << std::endl;
	// 	std::cout << "==========Exception Test 1a: Success==========" << std::endl;
	// }
	// try
	// {
	// 	Form	f4("H55", 42, 0);
	// }
	// catch(const Form::GradeTooHighException &e)
	// {
	// 	std::cout << "Instantiating with gradeExe(0): " << e.what() << std::endl;
	// 	std::cout << "==========Exception Test 1b: Success==========" << std::endl;
	// }

	// std::cout << "\n==========Exception Test 2: Constructor - GradeTooLow==========" << std::endl;
	// try
	// {
	// 	Form	f5("Consent", 151, 24);
	// }
	// catch(const Form::GradeTooLowException &e)
	// {
	// 	std::cout << "Instantiating with gradeSign(151): " << e.what() << std::endl;
	// 	std::cout << "==========Exception Test 2a: Success==========" << std::endl;
	// }
	// try
	// {
	// 	Form	f6("Consent", 42, 151);
	// }
	// catch(const Form::GradeTooLowException &e)
	// {
	// 	std::cout << "Instantiating with gradeExe(151): " << e.what() << std::endl;
	// 	std::cout << "==========Exception Test 2b: Success==========" << std::endl;
	// }

	// std::cout << "\n==========Test 3: Signature (Form)==========" << std::endl;
	// Form		f7("Resignation", 42, 24);
	// Bureaucrat	b1("Mark S.", 42);

	// std::cout << "f7: " << f7 << std::endl;
	// std::cout << "b1: " << b1 << " Sign f7" << std::endl;
	// f7.beSigned(b1);
	// std::cout << "f7: " << f7 << std::endl;
	// std::cout << "==========Test 3a: Success==========" << std::endl;

	// Form		f8("Family Outing", 42, 24);
	// Bureaucrat	b2("Helly R.", 43);

	// std::cout << "f8: " << f8 << std::endl;
	// std::cout << "b2: " << b2 << " Sign f8" << std::endl;
	// try
	// {
	// 	f8.beSigned(b2);
	// }
	// catch(const Form::GradeTooLowException &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// 	std::cout << "f8: " << f8 << std::endl;
	// 	std::cout << "==========Test 3b: Success==========" << std::endl;
	// }

	// std::cout << "\n==========Test 4: Signature (Bureaucrat)==========" << std::endl;
	// Bureaucrat	b3("Irving B.", 2);
	// Form		f9("B150", 150, 150);
	// Form		f10("C1", 1, 1);

	// std::cout << "b3: " << b3 << std::endl;
	// std::cout << "f9: " << f9 << std::endl;
	// std::cout << "f10: " << f10 << std::endl;
	// b3.signForm(f9);
	// b3.signForm(f9);
	// b3.signForm(f10);

	std::cout << "\n==========Destructor Test==========" << std::endl;

	return (0);
}
