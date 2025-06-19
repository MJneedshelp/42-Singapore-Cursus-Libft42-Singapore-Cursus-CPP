/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntegerTest.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 04:22:40 by mintan            #+#    #+#             */
/*   Updated: 2025/06/20 04:35:08 by mintan           ###   ########.fr       */
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

	no3 = Integer(88);

	std::cout << "no1: " << no1.getValue() << std::endl;
	std::cout << "no2: " << no2.getValue() << std::endl;
	std::cout << "no3: " << no3.getValue() << std::endl;

	return (0);
}
