/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:54:52 by mintan            #+#    #+#             */
/*   Updated: 2025/09/23 18:20:39 by mj               ###   ########.fr       */
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
	std::clock_t	start;
	std::clock_t	end;
	double			vecTime;
	int				vecNumCmpr;
	double			dqTime;
	int				dqNumCmpr;

	if (!mergeMe.validateInput(argc, argv))
		return (1);

	mergeMe.populateVec(argc, argv);
	mergeMe.populateDQ(argc, argv);

	std::cout << "========== Original Sequence ==========" << std::endl;
	mergeMe.printContainer(Vector);
	std::cout << std::endl;
	mergeMe.printContainer(Deque);

	std::cout << "\n========== Processing Vector<int> ==========" << std::endl;
	start = std::clock();
	mergeMe.vecSort();
	end = std::clock();
	vecTime = double(end - start);
	vecNumCmpr = mergeMe.getNumCmpr();

	mergeMe.initialiseMbrs();

	std::cout << "\n========== Processing Deque<int> ==========" << std::endl;
	start = std::clock();
	mergeMe.dqSort();
	end = std::clock();
	dqTime = double(end - start);
	dqNumCmpr = mergeMe.getNumCmpr();

	std::cout << "\n========== Sorted Sequence ==========" << std::endl;
	mergeMe.printContainer(Vector);
	std::cout << std::endl;
	mergeMe.printContainer(Deque);

	std::cout << "\n========== Time Taken | No. of Elements: " << mergeMe.seqSize \
	<< " | Max No. of Comparisons: " << \
	PmergeMe::calculateMaxCmpr(mergeMe.seqSize) << " ==========" << std::endl;

	std::cout << "Vector<int> (microseconds): " << vecTime  << \
	" | No. of comparisons: " << vecNumCmpr << std::endl;

	std::cout << "Deque<int> (microseconds): " << dqTime  <<
	" | No. of comparisons: " << dqNumCmpr << std::endl;

	return (0);
}
