/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/29 08:57:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Helper functions - Determine Char */

bool	ScalarConverter::_isChar(const std::string &input)
{
	if (input.length() == 1 && !std::isdigit(static_cast<char>(input[0])))
		return (true);
	return (false);
}

/* Helper functions - Determine Int */

bool	ScalarConverter::_isWholeNum(const std::string &input)
{
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (i == 0 && static_cast<char>(input[i]) == '-')
			continue;
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::_withinIntLimits(const std::string &input)
{
	long	inputLong;

	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
		return (false);
	return(true);
}

bool	ScalarConverter::_isInt(const std::string &input)
{
	if (_isWholeNum(input) && _withinIntLimits(input))
		return (true);
	return (false);
}

/* Helper functions - Determine Double */

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

	if (_isDoublePLiteral(input))
		return (true);
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

/* Helper functions - Determine Float */

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

	if (_isFloatPLiteral(input))
		return (true);
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

/* Helper functions - General */

std::string	ScalarConverter::_strToUpper(const std::string &input)
{
	std::string	strUpper;

	strUpper = input;
	for (unsigned int i = 0; i < input.length(); ++i)
		strUpper[i] = std::toupper(static_cast<unsigned char>(input[i]));
	return (strUpper);
}












int	ScalarConverter::_determineType(const std::string &input)
{
	if (_isChar(input))
		return (CHAR);
	if (_isInt(input))
		return (INT);
	if (_isDouble(input))
		return (DOUBLE);
	if (_isFloat(input))
		return (FLOAT);
	return (NOTINLIST);
}











void	ScalarConverter::convert(const std::string &input)
{
	const	int	type = _determineType(input);

	std::cout << "Type: " << type << std::endl;

	// switch (type)
	// {
	// 	case CHAR:
	// 	{
	// 		//Convert explicitly to 3 other types here
	// 		break;
	// 	}
	// 	case INT:
	// 	{

	// 		break;
	// 	}
	// 	case FLOAT:
	// 	{

	// 		break;
	// 	}
	// 	case DOUBLE:
	// 	{

	// 		break;
	// 	}




	// 	default:
	// 		break;
	// }
}
