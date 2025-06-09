/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:17:16 by mintan            #+#    #+#             */
/*   Updated: 2025/06/09 08:25:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string Test;

	// std::cout << "Test";
	// std::cout << std::endl;

	std::cout << "Type something" << std::endl;
	std::getline(std::cin, Test);
	std::cout << "Input: [" << Test << "] " << std::endl;
	std::cout << "Length of input: [" << Test.length() << "] " << std::endl;


	return 0;
}
