/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:17:16 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 14:36:16 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>


int	main(void)
{
	std::string Test;

	// std::cout << "Test";
	// std::cout << std::endl;

	// std::cout << "Type something" << std::endl;
	// std::getline(std::cin, Test);
	// std::cout << "Input: [" << Test << "] " << std::endl;
	// std::cout << "Length of input: [" << Test.length() << "] " << std::endl;


	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << 77 << std::endl;


	return 0;
}
