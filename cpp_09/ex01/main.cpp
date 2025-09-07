/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/09/08 00:19:39 by mintan           ###   ########.fr       */
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
	std::cout << "========== Main Programme ==========" << std::endl;
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
	{
		std::cout << "\n========== Test 3a: Input Not INT ==========" << std::endl;
		std::string	input("2147483648 1 +");
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
		std::cout << "\n========== Test 3b: Input Not INT ==========" << std::endl;
		std::string	input("1.1 1 +");
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
		std::cout << "\n========== Test 3c: Input Not INT ==========" << std::endl;
		std::string	input("1.1f 1 +");
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
		std::cout << "\n========== Test 4a: Input Out-of-Range ==========" << std::endl;
		std::string	input("1 1 + 11 1 +");
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
		std::cout << "\n========== Test 4b: Input Out-of-Range ==========" << std::endl;
		std::string	input("1 1 + -11 1 +");
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
		std::cout << "\n========== Test 5a: Problematic Input ==========" << std::endl;
		std::string	input("3 3 3");
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
		std::cout << "\n========== Test 5b: Problematic Input ==========" << std::endl;
		std::string	input("3 3 + -");
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
		std::cout << "\n========== Test 5c: Problematic Input ==========" << std::endl;
		std::string	input("2 2 2 + + +");
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
		std::cout << "\n========== Test 6a: Division by 0 ==========" << std::endl;
		std::string	input("5 0 /");
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
		std::cout << "\n========== Test 6b: Division by 0 ==========" << std::endl;
		std::string	input("7 9 5 * 5 9 * - /");
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
		std::cout << "\n========== Test 7a: Positive Tests ==========" << std::endl;
		std::string	input("5 1 2 + 4 * + 3 -");
		RPN			rpn(input);

		std::cout << "========== Input: " << input << " ==========" << std::endl;
		rpn.stackStack();
		rpn.printResult();
	}
	{
		std::cout << "\n========== Test 7b: Positive Tests ==========" << std::endl;
		std::string	input("1 2 3 4 5 + + + +");
		RPN			rpn(input);

		std::cout << "========== Input: " << input << " ==========" << std::endl;
		rpn.stackStack();
		rpn.printResult();
	}
	{
		std::cout << "\n========== Test 7c: Positive Tests ==========" << std::endl;
		std::string	input("9 3 / 2 2 + * 5 -");
		RPN			rpn(input);

		std::cout << "========== Input: " << input << " ==========" << std::endl;
		rpn.stackStack();
		rpn.printResult();
	}
	return (0);
}













