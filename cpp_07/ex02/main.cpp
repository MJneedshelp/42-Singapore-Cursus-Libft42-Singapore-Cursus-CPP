/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 10:53:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int	main(void)
{
	Array<int>	a1;
	Array<int>	a2(5);
	int			arr3[5] = {1, 2, 3, 4, 5};


	std::cout << "Memory Address of a1: " << a1.array << " | size: " \
	<< sizeof(*(a1.array)) << std::endl;

	std::cout << "Memory Address of a2: " << a2.array << " | size: " \
	<< sizeof(*(a2.array)) << std::endl;

	std::cout << "Memory Address of a3: " << arr3 << " | size: " \
	<< sizeof(arr3) << std::endl;

	return (0);
}
