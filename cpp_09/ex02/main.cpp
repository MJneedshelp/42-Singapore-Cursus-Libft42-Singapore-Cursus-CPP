/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:54:52 by mintan            #+#    #+#             */
/*   Updated: 2025/09/22 11:25:29 by mj               ###   ########.fr       */
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

	// std::cout << "Get nearest Jacobsthal lv: " << std::endl;
	// std::cout << "2: " << PmergeMe::_getNearestJacobsthalLv(2) << std::endl;
	// std::cout << "3: " << PmergeMe::_getNearestJacobsthalLv(3) << std::endl;
	// std::cout << "5: " << PmergeMe::_getNearestJacobsthalLv(5) << std::endl;
	// std::cout << "11: " << PmergeMe::_getNearestJacobsthalLv(11) << std::endl;
	// std::cout << "15: " << PmergeMe::_getNearestJacobsthalLv(15) << std::endl;
	// std::cout << "20: " << PmergeMe::_getNearestJacobsthalLv(20) << std::endl;
	// std::cout << "21: " << PmergeMe::_getNearestJacobsthalLv(21) << std::endl;
	// std::cout << "30: " << PmergeMe::_getNearestJacobsthalLv(30) << std::endl;



	// for (unsigned int lv = 3; lv <= 7; ++lv)
	// {
	// 	int	currJacobN = PmergeMe::_genJacobsthalNum(lv);
	// 	int	prevJacobN = PmergeMe::_genJacobsthalNum(lv - 1);
	// 	std::cout << "Current Jacobs Num: " << currJacobN << " | Prev Jacobs Num: " << prevJacobN << std::endl;
	// }





	return (0);
}
