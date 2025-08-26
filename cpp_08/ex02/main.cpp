/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:04:13 by mintan            #+#    #+#             */
/*   Updated: 2025/08/26 23:51:10 by mintan           ###   ########.fr       */
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












	return (0);
}
