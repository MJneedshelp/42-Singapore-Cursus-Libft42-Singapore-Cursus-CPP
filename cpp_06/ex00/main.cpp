/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:01:59 by mintan            #+#    #+#             */
/*   Updated: 2025/07/26 10:27:42 by mintan           ###   ########.fr       */
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
	checkArgs(argc);

	std::string	input = static_cast<std::string>(argv[1]);
	std::cout << input << std::endl;

	return (0);
}
