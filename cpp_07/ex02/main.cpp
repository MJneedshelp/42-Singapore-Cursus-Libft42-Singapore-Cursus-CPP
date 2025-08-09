/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 20:47:44 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int	main(void)
{
	//MJ probably add a case here to test for default constructor

	{
		std::cout << "============ Int Array ============" << std::endl;
		Array<int>	arr(5);

		for (unsigned int i = 0; i < arr.getArrSz(); ++i)
			arr.setArr(i, i + 1);
		std::cout << arr << std::endl;

		



	}


	return (0);
}
