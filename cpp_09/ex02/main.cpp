/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:54:52 by mintan            #+#    #+#             */
/*   Updated: 2025/09/20 18:11:15 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Description: checks if there is at least 1 input argument
*/
bool	validInArgs(int argc)
{
	if (argc < 2)
	{
		std::cerr << ERR_NOARG << std::endl;
		return (false);
	}
	return (true);
}




int	main(int argc, char *argv[])
{
	if (validInArgs(argc) == false)
		return (1);


	PmergeMe	guren;

	try
	{
		guren.populateVec(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	guren.printContainer(Vector);
	guren.vecSort();

	// std::cout << "Print Jacobsthal Numbers: ";
	// for (unsigned int i = 0; i < 20; ++i)
	// 	std::cout << PmergeMe::_genJacobsthalNum(i) << " ";
	// std:: cout << std::endl;

	return (0);
}
