/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/29 11:26:29 by mintan           ###   ########.fr       */
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

/* Helper functions - Casting */

void	ScalarConverter::_castFromChar(const std::string &input)
{
	char	cInput;
	int		iInput;
	float	fInput;
	double	dInput;

	cInput = static_cast<char>(input[0]);
	iInput = static_cast<int>(cInput);
	fInput = static_cast<float>(cInput);
	dInput = static_cast<double>(cInput);
	_printFormatter(&cInput, &iInput, &fInput, &dInput);
}

void	ScalarConverter::_castFromInt(const std::string &input)
{
	char	cInput;
	int		iInput;
	float	fInput;
	double	dInput;

	iInput = std::atoi(input.c_str())



	fInput = static_cast<float>(cInput);
	dInput = static_cast<double>(cInput);
	_printFormatter(&cInput, &iInput, &fInput, &dInput);
}




/* Helper functions - Printing */

void	ScalarConverter::_printFormatter(char *cInput, int *iInput, float *fInput, double *dInput)
{
	std::cout << "Char: ";
	if (cInput == NULL)
		std::cout << ERR_INCONVERTIBLE << std::endl;
	else if (!std::isprint(*cInput))
		std::cout << ERR_DISPLAYABLE << std::endl;
	else
		std::cout << *cInput << std::endl;

	std::cout << "Int: ";
	if (iInput == NULL)
		std::cout << ERR_INCONVERTIBLE << std::endl;
	else
		std::cout << *iInput << std::endl;

	std::cout << "Float: ";
	if (fInput == NULL)
		std::cout << ERR_INCONVERTIBLE << std::endl;
	else
	{
		if (_withinFloatLimits(*fInput))
		{
			std::cout << std::fixed << std::setprecision(1) << *fInput << "f" << std::endl;
			std::cout.unsetf(std::ios::fixed);
			std::cout << std::setprecision(6);
		}
		else
			std::cout << *fInput << "f" << std::endl;
	}

	std::cout << "Double: ";
	if (dInput == NULL)
		std::cout << ERR_INCONVERTIBLE << std::endl;
	else
	{
		if (_withinDoubleLimits(*dInput))
		{
			std::cout << std::fixed << std::setprecision(1) << *dInput << std::endl;
			std::cout.unsetf(std::ios::fixed);
			std::cout << std::setprecision(6);
		}
		else
			std::cout << *dInput << std::endl;
	}
}


bool	ScalarConverter::_withinFloatLimits(const float fInput)
{
	if (fInput > pow(2, 24) || fInput < -1 * pow(2, 24))
		return (false);
	return(true);
}

bool	ScalarConverter::_withinDoubleLimits(const double dInput)
{
	if (dInput > pow(2, 53) || dInput < -1 * pow(2, 53))
		return (false);
	return(true);
}









void	ScalarConverter::convert(const std::string &input)
{
	const	int	type = _determineType(input);

	std::cout << "Type: " << type << std::endl;

	switch (type)
	{
		case CHAR:
		{
			_castFromChar(input);
			break;
		}
		case INT:
		{

			break;
		}
		case FLOAT:
		{

			break;
		}
		case DOUBLE:
		{

			break;
		}




		default:
			break;
	}
}
