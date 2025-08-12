/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stltest.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:10:50 by mintan            #+#    #+#             */
/*   Updated: 2025/08/12 10:57:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <algorithm>


void	prInt(int i)
{
	std::cout << i << std::endl;
}


int	main(void)
{
	{
		std::list<int>					listInt;
		std::list<int>::const_iterator	itInt;
		std::list<int>::const_iterator	itIntEnd;

		itIntEnd = listInt.end();
		listInt.push_back(0);
		listInt.push_back(55);
		listInt.push_back(99);
		listInt.push_back(155);

		std::cout << "============= Using const iterator =============" << std::endl;
		for (itInt = listInt.begin(); itInt != itIntEnd; ++itInt)
			std::cout << *itInt << std::endl;

		std::cout << "\n============= Using for_each =============" << std::endl;
		for_each(listInt.begin(), listInt.end(), prInt);
	}
	return (0);
}
