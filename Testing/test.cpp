/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:17:16 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 19:22:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>


int	main(void)
{
	std::string Test;
	std::string Test1;


	// std::cout << "Test";
	// std::cout << std::endl;

	// std::cout << "Type something" << std::endl;
	// std::getline(std::cin, Test);
	// std::cout << "Input: [" << Test << "] " << std::endl;
	// std::cout << "Length of input: [" << Test.length() << "] " << std::endl;

	Test = "123456789012";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << Test.substr(0, 8).append(".") << std::endl;

	// if (Test.length() > 10)
	// {
	// 	Test1 =
	// }
	// std::cout << (Test.substr(0, 8)).append('.') << std::endl;


	return 0;
}
