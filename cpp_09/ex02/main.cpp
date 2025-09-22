/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:54:52 by mintan            #+#    #+#             */
/*   Updated: 2025/09/22 18:41:28 by mj               ###   ########.fr       */
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
	if (!validInArgs(argc))
		return (1);

	PmergeMe		mergeMe;
	std::clock_t	vecStart;
	std::clock_t	vecEnd;

	if (!mergeMe.validateInput(argc, argv))
		return (1);

	mergeMe.populateVec(argc, argv);
	//populate other container too

	std::cout << "========== Original Sequence ==========" << std::endl;
	mergeMe.printContainer(Vector);

	std::cout << "\n========== Processing... ==========" << std::endl;
	vecStart = std::clock();
	mergeMe.vecSort();
	vecEnd = std::clock();



	std::cout << "\n========== Sorted Sequence ==========" << std::endl;
	mergeMe.printContainer(Vector);

	std::cout << "\n========== Time Taken | No. of Elements: " << mergeMe.seqSize \
	<< " ==========" << std::endl;
	std::cout << "Vector<int> (microseconds): " << double(vecEnd - vecStart) << std::endl;






	return (0);
}
