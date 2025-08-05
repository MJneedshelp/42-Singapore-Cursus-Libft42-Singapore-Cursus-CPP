/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:32:31 by mintan            #+#    #+#             */
/*   Updated: 2025/08/05 08:51:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//Template definition
template<typename T>

T const&	max(const T &x, const T &y)
{
	return(x >= y ? x : y);
}


int	main(void)
{
	std::cout << "========== Test: int ==========" << std::endl;
	{
		int	x = 42;
		int	y = 24;

		//Explicit instantiation of template
		std::cout << "Max of x: " << x << " and y: " << y << " is ";
		std::cout << max<int>(x, y) << std::endl;

		//Implicit instantiation of template
		std::cout << "Max of x: " << x << " and y: " << y << " is ";
		std::cout << max(x, y) << std::endl;
	}

	std::cout << "\n========== Test: float ==========" << std::endl;
	{
		float	x = 42.0f;
		float	y = 24.0f;

		//Explicit instantiation of template
		std::cout << "Max of x: " << x << " and y: " << y << " is ";
		std::cout << max<float>(x, y) << std::endl;

		//Implicit instantiation of template
		std::cout << "Max of x: " << x << " and y: " << y << " is ";
		std::cout << max(x, y) << std::endl;
	}

	std::cout << "\n========== Test: char ==========" << std::endl;
	{
		char	x = 'c';
		char	y = 'd';

		//Explicit instantiation of template
		std::cout << "Max of x: " << x << " and y: " << y << " is ";
		std::cout << max<char>(x, y) << std::endl;

		//Implicit instantiation of template
		std::cout << "Max of x: " << x << " and y: " << y << " is ";
		std::cout << max(x, y) << std::endl;
	}


	return (0);
}
