/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:47:34 by mintan            #+#    #+#             */
/*   Updated: 2025/08/07 12:07:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "general.hpp"


int	main(void)
{
	std::cout << "======================== Non-const ======================== " << std::endl;
	{
		std::cout << "============ Int ============ " << std::endl;
		int			arrInt[] = {0, 1, 2, 3, 4};

		std::cout << "========= Before doubling ========= " << std::endl;
		::iter(arrInt, 5, ::printT<int>);
		std::cout << "========= After doubling ========= " << std::endl;
		::iter(arrInt, 5, ::doubleT<int>);
		::iter(arrInt, 5, ::printT<int>);

		std::cout << "\n============ Str ============ " << std::endl;
		std::string	arrStr[5];

		arrStr[0] = "zero";
		arrStr[1] = "one";
		arrStr[2] = "two";
		arrStr[3] = "three";
		arrStr[4] = "four";
		std::cout << "========= Before _ ========= " << std::endl;
		::iter(arrStr, 5, ::printT<std::string>);
		std::cout << "========= After _ ========= " << std::endl;
		::iter(arrStr, 5, ::underscoreStr);
		::iter(arrStr, 5, ::printT<std::string>);

		std::cout << "\n============ float ============ " << std::endl;
		float		arrFloat[] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f};

		std::cout << "========= Before incrementing ========= " << std::endl;
		::iter(arrFloat, 5, ::printT<float>);
		std::cout << "========= After incrementing ========= " << std::endl;
		::iter(arrFloat, 5, ::incrementFloat);
		::iter(arrFloat, 5, ::printT<float>);
	}

	std::cout << "\n======================== Const ======================== " << std::endl;
	{
		std::cout << "============ Int ============ " << std::endl;
		const int	arr[] = {5, 6, 7, 8, 9};

		::iter(arr, 5, ::printT<int>);
	}




	return (0);
}
