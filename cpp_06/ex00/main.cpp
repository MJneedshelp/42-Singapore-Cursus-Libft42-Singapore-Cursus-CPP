/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:01:59 by mintan            #+#    #+#             */
/*   Updated: 2025/07/26 16:36:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#define ERR_NOARG "Please run the programme with 1 argument as the input"
#define WARN_MULTIARG "Only the first argument will be processed"

void	checkArgs(int argc)
{
	if (argc < 2)
	{
		std::cerr << ERR_NOARG << std::endl;
		_Exit(1);
	}
	if (argc > 2)
		std::cout << WARN_MULTIARG << std::endl;
}

int	main(int argc, char *argv[])
{
	{
		std::string	input;

		checkArgs(argc);
		input = argv[1];
		ScalarConverter::convert(input);
	}
	{
		std::string	input;

		std::cout << "\n=========== Tests: 4 ===========" << std::endl;
		input = "4";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: q ===========" << std::endl;
		input = "q";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: \\b ===========" << std::endl;
		input = "\b";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: 2147483647 ===========" << std::endl;
		input = "2147483647";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: -2147483648 ===========" << std::endl;
		input = "-2147483648";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: 2147483649 ===========" << std::endl;
		input = "2147483649";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: -2147483649 ===========" << std::endl;
		input = "-2147483649";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: INFF ===========" << std::endl;
		input = "INFF";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: +INFF ===========" << std::endl;
		input = "+INFF";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: -INFF ===========" << std::endl;
		input = "-INFF";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: inff ===========" << std::endl;
		input = "inff";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: +inff ===========" << std::endl;
		input = "+inff";
		ScalarConverter::convert(input);

		std::cout << "\n=========== Tests: -inff ===========" << std::endl;
		input = "-inff";
		ScalarConverter::convert(input);
	}

	return (0);
}
