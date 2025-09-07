/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/09/07 21:24:22 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Description: checks if there is a valid number of input arguments: 2
*/
bool	validInArgs(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << ERR_NOARG << std::endl;
		return (false);
	}
	if (std::string(argv[1]).empty())
	{
		std::cerr << ERR_EMPTYARG << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	std::cout << "========== Main programme ==========" << std::endl;
	if (validInArgs(argc, argv) == false)
		return (1);

	std::string	input(argv[1]);
	RPN			rpn(input);

	try
	{
		rpn.stackStack();
		rpn.printResult();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	{
		std::cout << "\n========== Test 1: Empty Input ==========" << std::endl;
		std::string	input("");
		RPN			rpn(input);

		std::cout << "========== Input: " << input << "==========" << std::endl;
		try
		{
			rpn.stackStack();
			rpn.printResult();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n========== Test 2a: Invalid Input ==========" << std::endl;
		std::string	input("8 9 + seven /");
		RPN			rpn(input);

		std::cout << "========== Input: " << input << " ==========" << std::endl;
		try
		{
			rpn.stackStack();
			rpn.printResult();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n========== Test 2b: Invalid Input ==========" << std::endl;
		std::string	input("(1 + 1)");
		RPN			rpn(input);

		std::cout << "========== Input: " << input << " ==========" << std::endl;
		try
		{
			rpn.stackStack();
			rpn.printResult();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);

}













