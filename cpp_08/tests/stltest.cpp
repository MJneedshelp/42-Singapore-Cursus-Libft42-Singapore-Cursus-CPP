/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stltest.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:10:50 by mintan            #+#    #+#             */
/*   Updated: 2025/08/26 18:57:11 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <stack>
#include <iterator>
#include <algorithm>
#include <stdexcept>

void	prInt(int i)
{
	std::cout << i << std::endl;
}


int	main(void)
{
	{
		std::cout << "============= Basic List Test =============" << std::endl;
		std::list<int>					listInt;
		std::list<int>					listIntCpy(50);
		std::list<int>::const_iterator	itInt;
		std::list<int>::const_iterator	itIntEnd;
		std::list<int>::const_iterator	itFind;

		itIntEnd = listInt.end();
		listInt.push_back(0);
		listInt.push_back(55);
		listInt.push_back(99);
		listInt.push_back(155);
		listInt.push_back(55);

		listIntCpy = listInt;

		listInt.push_back(42);



		std::cout << "============= Using const iterator =============" << std::endl;
		for (itInt = listInt.begin(); itInt != itIntEnd; ++itInt)
			std::cout << *itInt << std::endl;

		std::cout << "============= Using for_each =============" << std::endl;
		for_each(listInt.begin(), listInt.end(), prInt);

		std::cout << "============= Check copy list =============" << std::endl;
		for (itInt = listIntCpy.begin(); itInt != listIntCpy.end(); ++itInt)
			std::cout << *itInt << std::endl;

		std::cout << "============= Using std::find -> success =============" << std::endl;
		itFind = std::find(listInt.begin(), listInt.end(), 55);
		std::cout << *itFind << std::endl;

		std::cout << "============= Using std::find -> fail =============" << std::endl;
		itFind = std::find(listInt.begin(), listInt.end(), 42);
		if (itFind == itIntEnd)
			std::cout << "Unable to find the value 42" << std::endl;
	}
	// {
	// 	std::cout << "\n============= Basic Vector Test =============" << std::endl;
	// 	std::vector<std::string>				fruits = {{"apple", "orange", "pear", "grapes"}};

	// 	/* Only available in c++11
	// 	for (std::string fruit : fruits)
	// 		std::cout << fruit << std::endl;
	// 		*/
	// 	std::cout << "============= Accessing elements front() / back() =============" << std::endl;
	// 	std::cout << "Front: " << fruits.front() << " | Back: " << fruits.back() << std::endl;
	// 	std::cout << "============= Accessing elements using [] =============" << std::endl;
	// 	std::cout << fruits[1] << std::endl;
	// 	std::cout << "============= Accessing elements using at() =============" << std::endl;
	// 	try
	// 	{
	// 		std::cout << fruits.at(3) << std::endl;
	// 	}
	// 	catch(const std::out_of_range& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	{
		std::cout << "\n============= Basic Stack Test =============" << std::endl;
		std::stack<int>					stackDQInt;
		std::deque<int>::const_iterator	itTest;


		stackDQInt.push(42);
		stackDQInt.push(24);
		stackDQInt.push(-5);


		std::cout << "Top: " << stackDQInt.top() << " | Size: " << stackDQInt.size() << std::endl;
		stackDQInt.pop();
		std::cout << "Top: " << stackDQInt.top() << " | Size: " << stackDQInt.size() << std::endl;
		std::cout << "Top address: " << &(stackDQInt.top()) << " | Size: " << stackDQInt.size() << std::endl;


		std::stack<int>					stackVecInt();





		std::list<int> lInt;

		for (int i = 0; i < 5; ++i)
			lInt.push_back(i);

		for (std::list<int>::iterator it = lInt.begin(); it != lInt.end(); ++it)
			std::cout << "Address: " << &it << " | Value: " << *it << std::endl;









	}



	// }
	return (0);
}
