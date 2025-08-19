/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 00:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/08/20 02:46:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::cout << "============= 1. Int List =============" << std::endl;
	std::list<int>					listInt;
	std::list<int>::const_iterator	itInt;

	listInt.push_back(0);
	listInt.push_back(42);
	listInt.push_back(99);
	listInt.push_back(42);
	listInt.push_back(-55);

	std::cout << "========== 1a. Print Int List ==========" << std::endl;
	for (itInt = listInt.begin(); itInt != listInt.end(); ++itInt)
			std::cout << "Iterator address: " << &(*itInt) << " | value " << *itInt << std::endl;

	std::cout << "========== 1b. Easyfound: 42 ==========" << std::endl;
	itInt = ::easyfind(listInt, 42);
	std::cout << "Iterator address: " << &(*itInt) << " | value " << *itInt << std::endl;

	std::cout << "========== 1c. Easyflop: -42 ==========" << std::endl;
	try
	{
		itInt = ::easyfind(listInt, -42);
	}
	catch(int valNotFound)
	{
		std::cerr << "Element not found: " << valNotFound << std::endl;
	}










	return (0);




}
