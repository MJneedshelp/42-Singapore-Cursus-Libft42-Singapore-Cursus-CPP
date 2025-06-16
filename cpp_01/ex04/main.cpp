/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:25:15 by mintan            #+#    #+#             */
/*   Updated: 2025/06/16 13:40:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define ERR_NOARG "This programme must be run with 3 args: file, str1, str2!"

bool	validInArgs(int argc)
{
	if (argc != 4)
	{
		std::cout << ERR_NOARG << std::endl;
		return (false);
	}
	return (true);
}



int	main(int argc, char *argv[])
{
	if (validInArgs(argc) == false)
		return (1);
	// std::ifstream	infilestr("numbers");
	// int				dst1;
	// int				dst2;

	// infilestr >> dst1 >> dst2;

	// std::cout << "Dest 1: " << dst1 << " Dest 2: " << dst2 << std::endl;

	// std::ofstream	ofs("outputfile");
	// ofs << "This is sorta useful...." << std::endl;

	std::string	test;

	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			test = argv[i];
			std::cout << test << std::endl;
		}
	}
	return (0);
}
