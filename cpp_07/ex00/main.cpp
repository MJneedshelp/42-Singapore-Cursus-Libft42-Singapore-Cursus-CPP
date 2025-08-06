/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:16:42 by mintan            #+#    #+#             */
/*   Updated: 2025/08/06 14:09:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int const&	genericFx(const int &x)
{
	std::cout << "generic function" << std::endl;
	return (x);
}

int	main(void)
{
	std::cout << "========== Test: int ==========" << std::endl;
	{
		int	x = -42;
		int	y = 24;

		//Declaration
		std::cout << "Before swap: x = " << x << " | y: " << y << std::endl;
		swap(&x, &y);
		std::cout << "After swap: x = " << x << " | y: " << y << std::endl;

		//Explicit instantiation of template
		std::cout << "min (x, y): " << ::min<int>(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max<int>(x, y) << std::endl;

		//Implicit instantiation of template
		std::cout << "min (x, y): " << ::min(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max(x, y) << std::endl;

	}

	std::cout << "\n========== Test: float ==========" << std::endl;
	{
		float	x = 42.0f;
		float	y = -24.0f;

		//Declaration
		std::cout << "Before swap: x = " << x << " | y: " << y << std::endl;
		swap(&x, &y);
		std::cout << "After swap: x = " << x << " | y: " << y << std::endl;

		//Explicit instantiation of template
		std::cout << "min (x, y): " << ::min<float>(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max<float>(x, y) << std::endl;


		//Implicit instantiation of template
		std::cout << "min (x, y): " << ::min(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max<float>(x, y) << std::endl;

	}

	std::cout << "\n========== Test: string ==========" << std::endl;
	{
		std::string	x = "whut";
		std::string	y = "eva";

		//Declaration
		std::cout << "Before swap: x = " << x << " | y: " << y << std::endl;
		swap(&x, &y);
		std::cout << "After swap: x = " << x << " | y: " << y << std::endl;

		//Explicit instantiation of template
		std::cout << "min (x, y): " << ::min<std::string>(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max<std::string>(x, y) << std::endl;


		//Implicit instantiation of template
		std::cout << "min (x, y): " << ::min(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max(x, y) << std::endl;
	}

	std::cout << "\n========== Test: char ==========" << std::endl;
	{
		char	x = 'c';
		char	y = 'd';

		//Declaration
		std::cout << "Before swap: x = " << x << " | y: " << y << std::endl;
		::swap(&x, &y);
		std::cout << "After swap: x = " << x << " | y: " << y << std::endl;

		//Explicit instantiation of template
		std::cout << "min (x, y): " << ::min<char>(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max<char>(x, y) << std::endl;


		//Implicit instantiation of template
		std::cout << "min (x, y): " << ::min(x, y) << std::endl;
		std::cout << "max (x, y): " << ::max(x, y) << std::endl;
	}

	std::cout << "\n========== Test: function ==========" << std::endl;
	{
		int	x = 99;
		int	y = -5;

		//Declaration
		std::cout << "Before swap: x = " << x << " | y: " << y << std::endl;
		::swap(&x, &y);
		std::cout << "After swap: x = " << x << " | y: " << y << std::endl;

		//Explicit instantiation of template
		std::cout << "min (x, y): " << ::min<int>(genericFx(x), genericFx(y)) << std::endl;
		std::cout << "max (x, y): " << ::max<int>(genericFx(x), genericFx(y)) << std::endl;


		//Implicit instantiation of template
		std::cout << "min (x, y): " << ::min(genericFx(x), genericFx(y)) << std::endl;
		std::cout << "max (x, y): " << ::max(genericFx(x), genericFx(y)) << std::endl;
	}

	return (0);
}
