/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/10 17:31:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\n==========Basic OCF Tests==========" << std::endl;

	Bureaucrat	b1("Mark S.", 2);
	Bureaucrat	b2(b1);
	Bureaucrat	b3("Helly R.", 150);

	std::cout << "[Memory Address b1]: " << &b1 << std::endl;
	std::cout << "[Memory Address b2]: " << &b2 << std::endl;
	std::cout << "b1: " << b1 << std::endl;
	std::cout << "b2: " << b2 << std::endl;
	std::cout << "b3: " << b3 << std::endl;

	std::cout << "[Promote b1]" << std::endl;
	b1.promote();
	std::cout << "b1: " << b1 << std::endl;

	std::cout << "[Demote b1]" << std::endl;
	b1.demote();
	std::cout << "b1: " << b1 << std::endl;

	std::cout << "\n==========Exception Test 1: Constructor - GradeTooHigh==========" << std::endl;
	try
	{
		Bureaucrat	b4("Irving B.", 0);
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Instantiating with grade(0): " << e.what() << std::endl;
		std::cout << "==========Exception Test 1: Success==========" << std::endl;
	}

	std::cout << "\n==========Exception Test 2: Constructor - GradeTooLow==========" << std::endl;
	try
	{
		Bureaucrat	b5("Dylan G.", 151);
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Instantiating with grade(151): " << e.what() << std::endl;
		std::cout << "==========Exception Test 2: Success==========" << std::endl;
	}

	std::cout << "\n==========Exception Test 3: Promotion==========" << std::endl;
	try
	{
		Bureaucrat	b6("Milchick", 1);
		std::cout << "b6: " << b6 << std::endl;
		b6.promote();
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Promoting b6 with grade(1): " << e.what() << std::endl;
		std::cout << "==========Exception Test 3: Success==========" << std::endl;
	}

	std::cout << "\n==========Exception Test 4: Demotion==========" << std::endl;
	try
	{
		Bureaucrat	b7("Burt G.", 150);
		std::cout << "b7: " << b7 << std::endl;
		b7.demote();
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Demoting b7 with grade(150): " << e.what() << std::endl;
		std::cout << "==========Exception Test 4: Success==========" << std::endl;
	}

	std::cout << "\n==========Exception Test 5: Memory Allocation==========" << std::endl;
	Bureaucrat	*b8 = NULL;
	try
	{
		b8 = new Bureaucrat("Miss Cobel", 150);
		std::cout << "b8: " << *b8 << std::endl;
		b8->demote();
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		delete(b8);
		std::cout << "Demoting b8 with grade(150): " << e.what() << std::endl;
		std::cout << "==========Exception Test 5: Success==========" << std::endl;
	}

	std::cout << "\n==========Exception Test 6: General==========" << std::endl;
	try
	{
		Bureaucrat	b9("Eustice", 1);
		std::cout << "b9: " << b9 << std::endl;
		b9.promote();
	}
	catch(const std::exception &e)
	{
		std::cout << "Promoting b9 with grade(1): " << e.what() << std::endl;
		std::cout << "==========Exception Test 6: Success==========" << std::endl;
	}

	std::cout << "\n==========Destructor Test==========" << std::endl;

	return (0);
}
