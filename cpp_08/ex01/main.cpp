/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:58:53 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 13:22:55 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	span1(3);

	span1.addNumber(42);

	std::cout << span1 << std::endl;

	span1.addNumber(-5);
	std::cout << span1 << std::endl;


	span1.addNumber(0);
	std::cout << span1 << std::endl;

	// span1.shortestSpan();
	std::cout << span1 << std::endl;

	span1.addNumber(99);


	return(0);
}
