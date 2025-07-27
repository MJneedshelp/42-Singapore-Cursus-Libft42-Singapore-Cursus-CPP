/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/27 15:00:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Helper functions - Character */

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

/* Helper functions - Integer */

bool	ScalarConverter::_isInt(const std::string &input)
{
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (i == 0 && static_cast<char>(input[i]) == '-')
			continue;
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	return (_withinIntLimits(input));
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

/* Helper functions - Float */

bool	ScalarConverter::_isFloatPLiteral(const std::string &input)
{
	std::string	inputUpper;

	inputUpper = _strToUpper(input);
	if (inputUpper == "NANF" || inputUpper == "INFF" || \
	inputUpper == "+INFF" || inputUpper == "-INFF")
		return (true);
	return (false);
}

bool	ScalarConverter::_isFloat(const std::string &input)
{
	int		numDots;
	char	c;

	numDots = 0;
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		c = static_cast<char>(input[i]);
		if (i == 0 && c == '-')
			continue;
		if (!std::isdigit(c))
		{
			if (c == '.')
				++numDots;
			else if ((c == 'f' || c == 'F') && i == input.length() - 1)
				continue;
			else
				return (false);
		}
	}
	if (numDots > 1)
		return (false);
	return(true);
}

void	ScalarConverter::_printFloat(const std::string &input)
{
	float	outputFlt;

	std::cout << "Float: ";
	if (_isInt(input) || _isFloatPLiteral(input) || _isFloat(input))
	{
		outputFlt = std::strtof(input.c_str(), NULL);
		if (_withinFloatLimits(input))
		{
			std::cout << std::fixed << std::setprecision(1) << outputFlt << "f" << std::endl;
			std::cout.unsetf(std::ios::fixed);
			std::cout << std::setprecision(6);
		}
		else
			std::cout << outputFlt << "f" << std::endl;
	}
	else
		std::cout << ERR_INCONVERTIBLE << std::endl;
}

/* Helper functions - Double */

bool	ScalarConverter::_isDoublePLiteral(const std::string &input)
{
	std::string	inputUpper;

	inputUpper = _strToUpper(input);
	if (inputUpper == "NAN" || inputUpper == "INF" || \
	inputUpper == "+INF" || inputUpper == "-INF")
		return (true);
	return (false);
}

bool	ScalarConverter::_isDouble(const std::string &input)
{
	int		numDots;
	char	c;

	numDots = 0;
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		c = static_cast<char>(input[i]);
		if (i == 0 && c == '-')
			continue;
		if (!std::isdigit(c))
		{
			if (c == '.')
				++numDots;
			else
				return (false);
		}
	}
	if (numDots > 1)
		return (false);
	return(true);
}

void	ScalarConverter::_printDouble(const std::string &input)
{
	double	outputDbl;

	std::cout << "Double: ";
	if (_isInt(input) || _isDoublePLiteral(input) || _isFloat(input))
	{
		outputDbl = std::strtod(input.c_str(), NULL);
		if (_withinDoubleLimits(input))
		{
			std::cout << std::fixed << std::setprecision(1) << outputDbl << std::endl;
			std::cout.unsetf(std::ios::fixed);
			std::cout << std::setprecision(6);
		}
		else
			std::cout << outputDbl << std::endl;
	}
	else
		std::cout << ERR_INCONVERTIBLE << std::endl;
}

/* Helper functions - General */

bool	ScalarConverter::_withinIntLimits(const std::string &input)
{
	long	inputLong;

	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
		return (false);
	return(true);
}

bool	ScalarConverter::_withinFloatLimits(const std::string &input)
{
	long long	inputLong;

	inputLong = std::atoll(input.c_str());
	if (inputLong > pow(2, 24) || inputLong < -1 * pow(2, 24))
		return (false);
	return(true);
}

bool	ScalarConverter::_withinDoubleLimits(const std::string &input)
{
	long double	inputLong;

	inputLong = std::atoll(input.c_str());
	if (inputLong > pow(2, 53) || inputLong < -1 * pow(2, 53))
		return (false);
	return(true);
}

std::string	ScalarConverter::_strToUpper(const std::string &input)
{
	std::string	strUpper;

	strUpper = input;
	for (unsigned int i = 0; i < input.length(); ++i)
		strUpper[i] = std::toupper(static_cast<unsigned char>(input[i]));
	return (strUpper);
}


void	ScalarConverter::convert(const std::string &input)
{
	_printChr(input);
	_printInt(input);
	_printFloat(input);
	_printDouble(input);
}
