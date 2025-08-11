/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/12 02:48:43 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	{
		std::cout << "============ Int Array ============" << std::endl;

		std::cout << "============ Test 0: Empty Int Array ============" << std::endl;
		Array<int>	arrEmpty;

		std::cout << arrEmpty << std::endl;

		std::cout << "============ Test 1: Original Int Array ============" << std::endl;
		Array<int>	arr(5);

		for (unsigned int i = 0; i < arr.size(); ++i)
		{
			try
			{
				arr[i] = i + 1;
			}
			catch(std::exception &e)
			{
				std::cout << ERR_OOB << std::endl;
			}
		}
		std::cout << arr << std::endl;

		std::cout << "============ Test 2: Copy Int Array ============" << std::endl;
		Array<int>	arrCpy(arr);

		std::cout << arrCpy << std::endl;

		std::cout << "\n============ Test 3: = Operator  ============" << std::endl;
		Array<int>	arrCpyAss(7);

		std::cout << arrCpyAss << std::endl;
		std::cout << "============ After =  ============" << std::endl;
		arrCpyAss = arr;
		std::cout << arrCpyAss << std::endl;

		std::cout << "============ Test 4: Modify Int Array ============" << std::endl;
		arr[0] = 42;
		std::cout << "======== Test 4a: Original Int Array ========" << std::endl;
		std::cout << arr << std::endl;
		std::cout << "======== Test 4b: Copy Int Array ========" << std::endl;
		std::cout << arrCpy << std::endl;
		std::cout << "======== Test 4c: Copy Assigned Int Array ========" << std::endl;
		std::cout << arrCpyAss << std::endl;
		try
		{
			std::cout << "===== Test 5: Out of bound index - 5 =====" << std::endl;
			std::cout << arr[5] << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << ERR_OOB << std::endl;
		}

		std::cout << "\n============ Test 6: [] Operator  ============" << std::endl;
		std::cout << "arr[0]: " << arr[0] << std::endl;
	}

	{
		std::cout << "\n============ Char Array ============" << std::endl;

		std::cout << "============ Test 0: Empty Char Array ============" << std::endl;
		Array<char>	arrEmpty;

		std::cout << arrEmpty << std::endl;

		std::cout << "============ Test 1: Original Char Array ============" << std::endl;
		Array<char>	arr(4);

		try
		{
			arr[0] = 'c';
			arr[1] = 'h';
			arr[2] = 'a';
			arr[3] = 'r';
		}
		catch(std::exception &e)
		{
			std::cout << ERR_OOB << std::endl;
		}
		std::cout << arr << std::endl;

		std::cout << "============ Test 2: Copy Int Array ============" << std::endl;
		Array<char>	arrCpy(arr);
		std::cout << arrCpy << std::endl;

		std::cout << "\n============ Test 3: = Operator  ============" << std::endl;
		Array<char>	arrCpyAss(7);

		std::cout << arrCpyAss << std::endl;
		std::cout << "============ After =  ============" << std::endl;
		arrCpyAss = arr;
		std::cout << arrCpyAss << std::endl;

		std::cout << "============ Test 4: Modify Int Array ============" << std::endl;
		arr[0] = 'x';
		std::cout << "======== Test 4a: Original Int Array ========" << std::endl;
		std::cout << arr << std::endl;
		std::cout << "======== Test 4b: Copy Int Array ========" << std::endl;
		std::cout << arrCpy << std::endl;
		std::cout << "======== Test 4c: Copy Assigned Int Array ========" << std::endl;
		std::cout << arrCpyAss << std::endl;
		try
		{
			std::cout << "===== Test 5: Out of bound index - 4 =====" << std::endl;
			std::cout << arr[4] << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << ERR_OOB << std::endl;
		}

		std::cout << "\n============ Test 6: [] Operator  ============" << std::endl;
		std::cout << "arr[0]: " << arr[0] << std::endl;
	}

	{
		std::cout << "\n============ String Array ============" << std::endl;

		std::cout << "============ Test 0: Empty String Array ============" << std::endl;
		Array<std::string>	arrEmpty;

		std::cout << arrEmpty << std::endl;

		std::cout << "============ Test 1: Original String Array ============" << std::endl;
		Array<std::string>	arr(5);

		try
		{
			arr[0] = "zero";
			arr[1] = "one";
			arr[2] = "two";
			arr[3] = "three";
			arr[4] = "four";
		}
		catch(std::exception &e)
		{
			std::cout << ERR_OOB << std::endl;
		}
		std::cout << arr << std::endl;

		std::cout << "============ Test 2: Copy String Array ============" << std::endl;
		Array<std::string>	arrCpy(arr);
		std::cout << arrCpy << std::endl;

		std::cout << "\n============ Test 3: = Operator  ============" << std::endl;
		Array<std::string>	arrCpyAss(7);

		std::cout << arrCpyAss << std::endl;
		std::cout << "============ After =  ============" << std::endl;
		arrCpyAss = arr;
		std::cout << arrCpyAss << std::endl;

		std::cout << "============ Test 4: Modify String Array ============" << std::endl;
		arrCpy[0] = "infinity";
		std::cout << "======== Test 4a: Original String Array ========" << std::endl;
		std::cout << arr << std::endl;
		std::cout << "======== Test 4b: Copy String Array ========" << std::endl;
		std::cout << arrCpy << std::endl;
		std::cout << "======== Test 4c: Copy Assigned Int Array ========" << std::endl;
		std::cout << arrCpyAss << std::endl;
		try
		{
			std::cout << "===== Test 5: Out of bound index - 99 =====" << std::endl;
			std::cout << arr[99] << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << ERR_OOB << std::endl;
		}

		std::cout << "\n============ Test 6: [] Operator  ============" << std::endl;
		std::cout << "arrCpy[0]: " << arrCpy[0] << std::endl;
	}
	return (0);
}
