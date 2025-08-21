/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 00:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/08/21 09:43:23 by mintan           ###   ########.fr       */
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

	std::cout << "========== 1a. Print Char List ==========" << std::endl;
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

	std::cout << "\n============= 2. Char List =============" << std::endl;
	std::list<char>					listChar;
	std::list<char>::const_iterator	itChar;

	listChar.push_back('*');
	listChar.push_back('c');
	listChar.push_back('h');
	listChar.push_back('a');
	listChar.push_back('r');
	listChar.push_back('*');

	std::cout << "========== 2a. Print Char List ==========" << std::endl;
	for (itChar = listChar.begin(); itChar != listChar.end(); ++itChar)
			std::cout << "Iterator address: " << static_cast<const void *>(&(*itChar)) << " | value " << *itChar << std::endl;

	std::cout << "========== 2b. Easyfound: 42 ==========" << std::endl;
	itChar = ::easyfind(listChar, 42);
	std::cout << "Iterator address: " << static_cast<const void *>(&(*itChar)) << " | value " << *itChar << std::endl;

	std::cout << "========== 2c. Easyflop: 100 ==========" << std::endl;
	try
	{
		itChar = ::easyfind(listChar, 100);
	}
	catch(int valNotFound)
	{
		std::cerr << "Element not found: " << valNotFound << std::endl;
	}

	std::cout << "\n============= 3. Float List =============" << std::endl;
	std::list<float>					listFloat;
	std::list<float>::const_iterator	itFloat;

	listFloat.push_back(42.42f);
	listFloat.push_back(42.1f);
	listFloat.push_back(42.0f);
	listFloat.push_back(42.55f);
	listFloat.push_back(42.24f);
	listFloat.push_back(42.0f);

	std::cout << "========== 3a. Print Float List ==========" << std::endl;
	for (itFloat = listFloat.begin(); itFloat != listFloat.end(); ++itFloat)
			std::cout << "Iterator address: " << &(*itFloat) << " | value " << *itFloat << std::endl;

	std::cout << "========== 2b. Easyfound: 42 ==========" << std::endl;
	itFloat = ::easyfind(listFloat, 42);
	std::cout << "Iterator address: " << &(*itFloat) << " | value " << *itFloat << std::endl;

	std::cout << "========== 2c. Easyflop: 100 ==========" << std::endl;
	try
	{
		itFloat = ::easyfind(listFloat, 100);
	}
	catch(int valNotFound)
	{
		std::cerr << "Element not found: " << valNotFound << std::endl;
	}










	return (0);




}
