/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:54:52 by mintan            #+#    #+#             */
/*   Updated: 2025/09/11 02:40:38 by mintan           ###   ########.fr       */
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

	return (0);
}
