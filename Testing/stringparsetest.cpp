/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringparsetest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:57:00 by mintan            #+#    #+#             */
/*   Updated: 2025/07/26 02:04:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include <iostream>
#include <limits>
#include <cstdlib>

bool	isInt(std::string input)
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
	std::cout << longInput << std::endl;

	return (true);
}

int	main(void)
{
	std::string	input = "-012345";

	if (isInt(input))
		std::cout << "this works!" << std::endl;
	else
		std::cout << "failed!" << std::endl;

	return (0);
}
