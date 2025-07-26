/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/26 12:57:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Helper functions */
void	ScalarConverter::_printInt(const std::string &input)
{
	long	inputLong;
	int		outputInt;

	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (i == 0 && static_cast<char>(input[i]) == '-')
			continue;
		if (!std::isdigit(static_cast<int>(input[i])))
		{
			std::cout << ERR_INCONVERTIBLE << std::endl;
			return;
		}
	}
	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
	{
		std::cout << ERR_INCONVERTIBLE << std::endl;
		return;
	}
	outputInt = std::atoi(input.c_str());
	std::cout << outputInt << std::endl;
}

void	ScalarConverter::_printChr(const std::string &input)
{
	char	outputChr;

	if (input.length() == 1 && std::isprint(static_cast<char>(input[0])))
	{
		outputChr = static_cast<char>(input[0]);
		std::cout << outputChr << std::endl;
	}
	else
		std::cout << ERR_INCONVERTIBLE << std::endl;
}


// MJ reminders:
	//each of the scalar type checks probably can be separated into a single functions
	//

void	ScalarConverter::convert(const std::string &input)
{
	std::cout << "Char: ";
	_printChr(input);
	std::cout << "Int: ";
	_printInt(input);
	// {
	// 	outputInt = std::atoi(input.c_str());
	// 	std::cout << outputInt << std::endl;
	// }
	// else
	// 	std::cout << ERR_INCONVERTIBLE << std::endl;

}
