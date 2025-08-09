/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 19:28:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int	main(void)
{
	// Array<int>	a1;
	Array<int>	a2(5);
	// int			arr3[5] = {1, 2, 3, 4, 5};


	// std::cout << "Memory Address of a1: " << a1._array << " | size: "
	// << sizeof(*(a1._array)) << std::endl;

	// std::cout << "Memory Address of a2: " << a2._array << " | size: "
	// << sizeof(*(a2._array)) << std::endl;

	// std::cout << "Memory Address of a3: " << arr3 << " | size: "
	// << sizeof(arr3) << std::endl;

	for (unsigned int i = 0; i < a2._arrSz; ++i)
	{
		a2.setArr(i, i + 1);
	}

	for (unsigned int i = 0; i < a2._arrSz; ++i)
	{
		std::cout << a2[i] << std::endl;
	}


	return (0);
}
