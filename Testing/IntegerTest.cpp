/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntegerTest.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 04:22:40 by mintan            #+#    #+#             */
/*   Updated: 2025/06/24 14:42:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"


int	main(void)
{
	Integer	no1(42);
	Integer no2(24);
	Integer	no3(1);

	std::cout << "no1: " << no1.getValue() << std::endl;
	std::cout << "no2: " << no2.getValue() << std::endl;
	std::cout << "no3: " << no3.getValue() << std::endl;

	std::cout << "********** Testing with operator overload: = **********" << std::endl;

	no3 = Integer(88);

	std::cout << "no1: " << no1.getValue() << std::endl;
	std::cout << "no2: " << no2.getValue() << std::endl;
	std::cout << "no3: " << no3.getValue() << std::endl;

	std::cout << "********** Testing with operator overload: + **********" << std::endl;

	no3 = no1 + no2;

	std::cout << "no1: " << no1.getValue() << std::endl;
	std::cout << "no2: " << no2.getValue() << std::endl;
	std::cout << "no3: " << no3.getValue() << std::endl;

	std::cout << "********** Testing with operator overload: << **********" << std::endl;

	std::cout << "no1: " << no1 << std::endl;
	std::cout << "no2: " << no2 << std::endl;
	std::cout << "no3: " << no3 << std::endl;

	int	numFractBits = 8;

	std::cout << (10 * 1 << 8) << std::endl;
	std::cout << (10 << 8) << std::endl;
	std::cout << (256 >> 8) << std::endl;
	std::cout << ((float)2.5F * (1 << 8)) << std::endl;

	float	f = 256.0;
	std::cout << "Float: " << (f * (1 >> 8) )<< std::endl;




	return (0);
}
