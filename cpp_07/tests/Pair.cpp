/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 01:27:36 by mintan            #+#    #+#             */
/*   Updated: 2025/08/06 01:33:16 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pair.class.tpp"

int	main(void)
{
	Pair<int, int>				p1(42, 24);
	Pair<std::string, float>	p2(std::string("Pie"), 3.14f);
	Pair<bool, bool>			p3(true, false);
	Pair<bool, char>			p4(true, 'c');

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return (0);
}
