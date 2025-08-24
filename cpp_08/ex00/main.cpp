/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 00:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 10:58:13 by mintan           ###   ########.fr       */
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
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
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
	itChar = ::easyfind(listChar, '*');
	std::cout << "Iterator address: " << static_cast<const void *>(&(*itChar)) << " | value " << *itChar << std::endl;

	std::cout << "========== 2c. Easyflop: k ==========" << std::endl;
	try
	{
		itChar = ::easyfind(listChar, 'k');
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
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

	std::cout << "========== 3b. Easyfound: 42 ==========" << std::endl;
	itFloat = ::easyfind(listFloat, 42);
	std::cout << "Iterator address: " << &(*itFloat) << " | value " << *itFloat << std::endl;

	std::cout << "========== 3c. Easyflop: 100 ==========" << std::endl;
	try
	{
		itFloat = ::easyfind(listFloat, 100);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n============= 4. Int Vector =============" << std::endl;
	std::vector<int>					vecInt(10);
	std::vector<int>::const_iterator	itVecInt;

	for (int i = 0; i < 10; ++i)
		vecInt[i] = i;
	vecInt.push_back(9);

	std::cout << "========== 4a. Print Int Vector ==========" << std::endl;
	for (itVecInt = vecInt.begin(); itVecInt != vecInt.end(); ++itVecInt)
		std::cout << "Iterator address: " << &(*itVecInt) << " | value " << *itVecInt << std::endl;

	std::cout << "========== 4b. Easyfound: 9 ==========" << std::endl;
	itVecInt = ::easyfind(vecInt, 9);
	std::cout << "Iterator address: " << &(*itVecInt) << " | value " << *itVecInt << std::endl;

	std::cout << "========== 4c. Easyflop: 100 ==========" << std::endl;
	try
	{
		itVecInt = ::easyfind(vecInt, 100);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n============= 5. Char Vector =============" << std::endl;
	std::vector<char>					vecChar(10);
	std::vector<char>::const_iterator	itVecChar;

	for (int i = 0; i < 10; ++i)
		vecChar[i] = i + 97;
	vecChar.push_back('e');

	std::cout << "========== 5a. Print Char Vector ==========" << std::endl;
	for (itVecChar = vecChar.begin(); itVecChar != vecChar.end(); ++itVecChar)
		std::cout << "Iterator address: " << static_cast<const void*>(&(*itVecChar)) << " | value " << *itVecChar << std::endl;

	std::cout << "========== 5b. Easyfound: e ==========" << std::endl;
	itVecChar = ::easyfind(vecChar, 'e');
	std::cout << "Iterator address: " << static_cast<const void*>(&(*itVecChar)) << " | value " << *itVecChar << std::endl;

	std::cout << "========== 5c. Easyflop: m ==========" << std::endl;
	try
	{
		itVecChar = ::easyfind(vecChar, 'm');
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n============= 6. Int Deque =============" << std::endl;
	std::deque<int>						dqInt(5);
	std::deque<int>::const_iterator		itDqInt;

	for (int i = 0; i < 5; ++i)
		dqInt[i] = i * 2;
	dqInt.push_back(0);

	std::cout << "========== 6a. Print Int Deque ==========" << std::endl;
	for (itDqInt = dqInt.begin(); itDqInt != dqInt.end(); ++itDqInt)
		std::cout << "Iterator address: " << &(*itDqInt) << " | value " << *itDqInt << std::endl;

	std::cout << "========== 6b. Easyfound: 0 ==========" << std::endl;
	itDqInt = ::easyfind(dqInt, 0);
	std::cout << "Iterator address: " << &(*itDqInt) << " | value " << *itDqInt << std::endl;

	std::cout << "========== 6c. Easyflop: 42 ==========" << std::endl;
	try
	{
		itDqInt = ::easyfind(dqInt, 42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
