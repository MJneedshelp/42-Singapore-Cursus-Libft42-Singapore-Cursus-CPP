/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringparsetest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:57:00 by mintan            #+#    #+#             */
/*   Updated: 2025/07/27 10:54:22 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include <iostream>
#include <limits.h>
#include <cstdlib>

bool	isInt(const std::string &input)
{
	long	longInput;

	for (int i = 0; i < input.length(); ++i)
	{
		if (i == 0 && static_cast<char>(input[i]) == '-')
			continue;
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	longInput = std::atol(input.c_str());
	if (longInput > INT_MAX || longInput < INT_MIN)
		return (false);
	return (true);
}

int	main(void)
{
	std::string	input = "-2147483648";
	int			iOutput;
	double		dOutput;
	float		fOutput;


	std::cout << "Int: ";
	if (isInt(input))
	{
		iOutput = std::atoi(input.c_str());
		std::cout << iOutput << std::endl;
	}
	else
		std::cout << "Invalid" << std::endl;

	fOutput = std::strtof("inff", NULL);
	std::cout << fOutput << std::endl;

	fOutput = std::strtof(".42f", NULL);
	std::cout << fOutput << std::endl;

	fOutput = std::strtof(".42F", NULL);
	std::cout << fOutput << std::endl;

	fOutput = std::strtof("42.", NULL);
	std::cout << fOutput << std::endl;

	fOutput = std::strtof("42.f", NULL);
	std::cout << fOutput << std::endl;

	fOutput = std::strtof("4F2", NULL);
	std::cout << fOutput << std::endl;


	fOutput = std::strtof("+INFF", NULL);
	std::cout << fOutput << std::endl;

	fOutput = std::strtof("-INFF", NULL);
	std::cout << fOutput << std::endl;



	return (0);
}
