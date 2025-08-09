/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 21:16:41 by mintan           ###   ########.fr       */
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

		try
		{
			std::cout << "===== Test x: Out of bound index - 5 =====" << std::endl;
			std::cout << arr[5] << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << ERR_OOB << std::endl;
		}



	}


	return (0);
}
