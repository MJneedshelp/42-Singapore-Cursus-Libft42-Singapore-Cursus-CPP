/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/26 16:35:28 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Helper functions */
void	ScalarConverter::_printChr(const std::string &input)
{
	char	outputChr;

	std::cout << "Char: ";
	if (input.length() == 1 && std::isprint(static_cast<char>(input[0])))
	{
		outputChr = static_cast<char>(input[0]);
		std::cout << outputChr << std::endl;
	}
	else
		std::cout << ERR_INCONVERTIBLE << std::endl;
}

bool	ScalarConverter::_isInt(const std::string &input)
{
	long	inputLong;

	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (i == 0 && static_cast<char>(input[i]) == '-')
			continue;
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
		return (false);
	return(true);
}

void	ScalarConverter::_printInt(const std::string &input)
{
	int		outputInt;

	std::cout << "Int: ";
	if (_isInt(input))
	{
		outputInt = std::atoi(input.c_str());
		std::cout << outputInt << std::endl;
	}
	else
		std::cout << ERR_INCONVERTIBLE << std::endl;
}

std::string	ScalarConverter::_strToUpper(const std::string &input)
{
	std::string	strUpper;

	strUpper = input;
	for (unsigned int i = 0; i < input.length(); ++i)
		strUpper[i] = std::toupper(static_cast<unsigned char>(input[i]));
	return (strUpper);
}

bool	ScalarConverter::_isFloatPLiteral(const std::string &input)
{
	std::string	inputUpper;

	inputUpper = _strToUpper(input);
	if (inputUpper == "INFF" || inputUpper == "+INFF" || inputUpper == "-INFF")
		return (true);
	return (false);
}

void	ScalarConverter::_printFlt(const std::string &input)
{
	double	outputFlt;

	std::cout << "Flt: ";
	if (_isInt(input) || _isFloatPLiteral(input))	//add the conditions here
	{
		outputFlt = std::strtof(input.c_str(), NULL);
		std::cout << outputFlt << std::endl;
	}
	else
		std::cout << ERR_INCONVERTIBLE << std::endl;
}


// MJ reminders:
	//each of the scalar type checks probably can be separated into a single functions
	//

void	ScalarConverter::convert(const std::string &input)
{
	_printChr(input);
	_printInt(input);
	_printFlt(input);


}
