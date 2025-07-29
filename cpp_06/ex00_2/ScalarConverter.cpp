/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/30 02:54:02 by mintan           ###   ########.fr       */
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
	_printFormatter(input, &cInput, &iInput, &fInput, &dInput);
}

void	ScalarConverter::_castFromInt(const std::string &input)
{
	char	cInput;
	int		iInput;
	float	fInput;
	double	dInput;

	iInput = std::atoi(input.c_str());
	cInput = static_cast<char>(iInput);
	fInput = static_cast<float>(iInput);
	dInput = static_cast<double>(iInput);
	if (iInput >= 0 && iInput <= 127)
		_printFormatter(input, &cInput, &iInput, &fInput, &dInput);
	else
		_printFormatter(input, NULL, &iInput, &fInput, &dInput);
}

void	ScalarConverter::_castFromFloat(const std::string &input)
{
	char	cInput;
	int		iInput;
	float	fInput;
	double	dInput;

	fInput = std::strtof(input.c_str(), NULL);
	iInput = static_cast<int>(fInput);
	cInput = static_cast<char>(fInput);
	dInput = static_cast<double>(fInput);
	if (!_withinFloatLimits(input) || std::isnan(dInput))
		_printFormatter(input, &cInput, NULL, &fInput, &dInput);
	else
		_printFormatter(input, &cInput, &iInput, &fInput, &dInput);
}

void	ScalarConverter::_castFromDouble(const std::string &input)
{
	char	cInput;
	int		iInput;
	float	fInput;
	double	dInput;

	dInput = std::strtod(input.c_str(), NULL);
	cInput = static_cast<char>(dInput);
	iInput = static_cast<int>(dInput);
	fInput = static_cast<float>(dInput);
	if (!_withinIntLimits(input) || std::isnan(dInput) || std::isinf(dInput))
		_printFormatter(input, &cInput, NULL, &fInput, &dInput);
	else
		_printFormatter(input, &cInput, &iInput, &fInput, &dInput);
}

/* Helper functions - Printing */

bool	ScalarConverter::_withinFloatLimits(const std::string &input)
{
	double	inputDouble;

	inputDouble = std::strtod(input.c_str(), NULL);
	if (inputDouble > pow(2, 24) || inputDouble < -1 * pow(2, 24))
		return (false);
	return(true);
}

bool	ScalarConverter::_withinDoubleLimits(const std::string &input)
{
	long double	inputLD;

	inputLD = std::atoll(input.c_str());
	if (inputLD > pow(2, 53) || inputLD < -1 * pow(2, 53))
		return (false);
	return(true);
}

void	ScalarConverter::_printNegative(void)
{
	std::cout << "Char: " << ERR_INCONVERTIBLE << std::endl;
	std::cout << "Int: " << ERR_INCONVERTIBLE << std::endl;
	std::cout << "Float: " << ERR_INCONVERTIBLE << std::endl;
	std::cout << "Double: " << ERR_INCONVERTIBLE << std::endl;
}

void	ScalarConverter::_printFormatter(std::string input, char *cInput, int *iInput, float *fInput, double *dInput)
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
		if (_withinFloatLimits(input))
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
		if (_withinDoubleLimits(input))
		{
			std::cout << std::fixed << std::setprecision(1) << *dInput << std::endl;
			std::cout.unsetf(std::ios::fixed);
			std::cout << std::setprecision(6);
		}
		else
			std::cout << *dInput << std::endl;
	}
}

/* Static convert function */
void	ScalarConverter::convert(const std::string &input)
{
	const	int	type = _determineType(input);
	switch (type)
	{
		case CHAR:
		{
			_castFromChar(input);
			break;
		}
		case INT:
		{
			_castFromInt(input);
			break;
		}
		case FLOAT:
		{
			_castFromFloat(input);
			break;
		}
		case DOUBLE:
		{
			_castFromDouble(input);
			break;
		}
		default:
		{
			_printNegative();
			break;
		}
	}
}
