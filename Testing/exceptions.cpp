/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 00:13:17 by mintan            #+#    #+#             */
/*   Updated: 2025/07/10 00:28:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

int	main(void)
{
	int	a = 42;

	try
	{
		if (a == 42)
			throw(std::runtime_error("42 is the answer"));
		else
			std::cout << "Life has no meaning" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
