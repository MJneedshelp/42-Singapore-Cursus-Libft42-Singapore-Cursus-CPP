/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/29 08:21:15 by mintan           ###   ########.fr       */
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






int	ScalarConverter::_determineType(const std::string &input)
{
	if (_isChar(input))
		return (CHAR);
	if (_isInt(input))
		return (INT);
	return (-1);
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
