/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:17:16 by mintan            #+#    #+#             */
/*   Updated: 2025/06/04 23:21:50 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[128];

	// std::cout << "Test";
	// std::cout << std::endl;

	std::cout << "Type something" << std::endl;
	std::cin >> buff;
	std::cout << "You typed this: [" << buff << "] " << std::endl;

	return 0;
}
