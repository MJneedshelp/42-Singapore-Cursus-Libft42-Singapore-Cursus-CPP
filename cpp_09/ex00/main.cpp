/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/08/29 09:02:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Database.hpp"

int	main(void)
{
	/* Try to read the input files */
	try
	{
		Database	input("input", "input.txt", '|');
		Database	data("input", "../data/data.csv", ',');



		// input.printMap();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
		return (1);
	}

	std::string		s1("2011-01-03");
	std::string		s2("2011-01-03");
	std::string		s3("2001-42-42");
	std::string		s4("2011-01-09");


	/* Test out string compare -> probably use for finding the closest date */
	std::cout << s1.compare(s2) << std::endl;
	std::cout << s1.compare(s3) << std::endl;
	std::cout << s1.compare(s4) << std::endl;






	return (0);
}
