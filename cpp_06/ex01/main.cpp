/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:57:41 by mintan            #+#    #+#             */
/*   Updated: 2025/07/30 23:35:13 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	std::cout << "============ Test 1 ============" << std::endl;

	Data	d1;

	std::cout << "Memory Address of d1: " << &d1 << std::endl;
	std::cout << d1 << std::endl;
	std::cout << "Serialize d1 -> u1" << std::endl;
	uintptr_t u1 = Serializer::serialize(&d1);
	std::cout << "Serialized value of d1 -> u1: " << u1 << std::endl;
	std::cout << "Deserialize u1 -> d1a" << std::endl;
	Data	*d1a = Serializer::deserialize(u1);
	std::cout << "Memory Address of d1a: " << d1a << std::endl;
	std::cout << *d1a << std::endl;

	std::cout << "\n============ Test 2 ============" << std::endl;

	Data	d2(42, 42.0f, "forty two");

	std::cout << "Memory Address of d2: " << &d2 << std::endl;
	std::cout << d2 << std::endl;
	std::cout << "Serialize d2 -> u2" << std::endl;
	uintptr_t u2 = Serializer::serialize(&d2);
	std::cout << "Serialized value of d2 -> u2: " << u2 << std::endl;
	std::cout << "Deserialize u2 -> d2a" << std::endl;
	Data	*d2a = Serializer::deserialize(u2);
	std::cout << "Memory Address of d2a: " << d2a << std::endl;
	std::cout << *d2a << std::endl;

	std::cout << "\n============ Test 2 - Serialize NULL ============" << std::endl;

	Data	*d3;

	d3 = NULL;
	std::cout << "Serialize d3 (NULL) -> u3" << std::endl;
	uintptr_t u3 = Serializer::serialize(d3);
	std::cout << "Serialized value of d3 -> u3: " << u3 << std::endl;

	return (0);
}
