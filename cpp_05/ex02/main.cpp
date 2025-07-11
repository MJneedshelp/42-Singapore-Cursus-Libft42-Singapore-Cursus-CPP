/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/11 01:23:43 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "\n==========Basic Form Tests==========" << std::endl;

	Form	f1("B17", 42, 24);
	Form	f2(f1);

	std::cout << "[Memory Address f1]: " << &f1 << std::endl;
	std::cout << "[Memory Address f2]: " << &f2 << std::endl;
	std::cout << "f1: " << f1 << std::endl;
	std::cout << "f2: " << f2 << std::endl;

	std::cout << "\n==========Exception Test 1: Constructor - GradeTooHigh==========" << std::endl;
	try
	{
		Form	f3("G17", 0, 24);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cout << "Instantiating with gradeSign(0): " << e.what() << std::endl;
		std::cout << "==========Exception Test 1a: Success==========" << std::endl;
	}
	try
	{
		Form	f4("H55", 42, 0);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cout << "Instantiating with gradeExe(0): " << e.what() << std::endl;
		std::cout << "==========Exception Test 1b: Success==========" << std::endl;
	}

	std::cout << "\n==========Exception Test 2: Constructor - GradeTooLow==========" << std::endl;
	try
	{
		Form	f5("Consent", 151, 24);
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cout << "Instantiating with gradeSign(151): " << e.what() << std::endl;
		std::cout << "==========Exception Test 2a: Success==========" << std::endl;
	}
	try
	{
		Form	f6("Consent", 42, 151);
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cout << "Instantiating with gradeExe(151): " << e.what() << std::endl;
		std::cout << "==========Exception Test 2b: Success==========" << std::endl;
	}

	std::cout << "\n==========Test 3: Signature (Form)==========" << std::endl;
	Form		f7("Resignation", 42, 24);
	Bureaucrat	b1("Mark S.", 42);

	std::cout << "f7: " << f7 << std::endl;
	std::cout << "b1: " << b1 << " Sign f7" << std::endl;
	f7.beSigned(b1);
	std::cout << "f7: " << f7 << std::endl;
	std::cout << "==========Test 3a: Success==========" << std::endl;

	Form		f8("Family Outing", 42, 24);
	Bureaucrat	b2("Helly R.", 43);

	std::cout << "f8: " << f8 << std::endl;
	std::cout << "b2: " << b2 << " Sign f8" << std::endl;
	try
	{
		f8.beSigned(b2);
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "f8: " << f8 << std::endl;
		std::cout << "==========Test 3b: Success==========" << std::endl;
	}

	std::cout << "\n==========Test 4: Signature (Bureaucrat)==========" << std::endl;
	Bureaucrat	b3("Irving B.", 2);
	Form		f9("B150", 150, 150);
	Form		f10("C1", 1, 1);

	std::cout << "b3: " << b3 << std::endl;
	std::cout << "f9: " << f9 << std::endl;
	std::cout << "f10: " << f10 << std::endl;
	b3.signForm(f9);
	b3.signForm(f9);
	b3.signForm(f10);

	std::cout << "\n==========Destructor Test==========" << std::endl;

	return (0);
}
