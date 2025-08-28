/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:04:13 by mintan            #+#    #+#             */
/*   Updated: 2025/08/28 09:52:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	std::cout << "============= 0. OCF Tests =============" << std::endl;
	MutantStack<int>	wolverine;

	wolverine.push(24);
	std::cout << "[Wolverine] Top: " << wolverine.top() << " | Size: " << wolverine.size() << std::endl;

	std::cout << "========== a. Copy Constructor ==========" << std::endl;
	MutantStack<int>	logan(wolverine);

	std::cout << "[Logan] Top: " << logan.top() << " | Size: " << logan.size() << std::endl;

	std::cout << "========== b. Copy Assignment Operator ==========" << std::endl;
	MutantStack<int>	weaponX;

	weaponX =  logan;
	std::cout << "[weaponX] Top: " << weaponX.top() << " | Size: " << weaponX.size() << std::endl;

	std::cout << "========== c. Deep Copy  ==========" << std::endl;
	wolverine.push(42);
	std::cout << "[Wolverine] Top: " << wolverine.top() << " | Size: " << wolverine.size() << std::endl;
	std::cout << "[Logan] Top: " << logan.top() << " | Size: " << logan.size() << std::endl;
	std::cout << "[weaponX] Top: " << weaponX.top() << " | Size: " << weaponX.size() << std::endl;

	std::cout << "\n============= 1. From beginning to end =============" << std::endl;
	MutantStack<int>::iterator itWolve;

	wolverine.push(-99);
	std::cout << "[Wolverine] Values: ";
	for (itWolve = wolverine.begin(); itWolve != wolverine.end(); ++itWolve)
		std::cout << *itWolve << " ";
	std::cout << std::endl;

	std::cout << "========== 1a. Mutation using iterators  ==========" << std::endl;
	itWolve = wolverine.begin();
	*(itWolve) = 99;
	std::cout << "[Wolverine] Values: ";
	for (itWolve = wolverine.begin(); itWolve != wolverine.end(); ++itWolve)
		std::cout << *itWolve << " ";
	std::cout << std::endl;

	std::cout << "\n============= 2. From beginning to end constantly =============" << std::endl;
	MutantStack<int>::const_iterator itWolveConst;

	std::cout << "[Wolverine] Values: ";
	for (itWolveConst = wolverine.cbegin(); itWolveConst != wolverine.cend(); ++itWolveConst)
		std::cout << *itWolveConst << " ";
	std::cout << std::endl;

	// std::cout << "========== 2a. Mutation using iterators (uncompilable) ==========" << std::endl;
	// itWolveConst = wolverine.begin();
	// *(itWolveConst) = 99;

	std::cout << "\n============= 3. Stack Functions =============" << std::endl;
	wolverine.pop();
	std::cout << "[Wolverine] Values after pop: ";
	for (itWolveConst = wolverine.cbegin(); itWolveConst != wolverine.cend(); ++itWolveConst)
		std::cout << *itWolveConst << " ";
	std::cout << std::endl;
	std::cout << "[Wolverine] Top: " << wolverine.top() << std::endl;

	return (0);
}
