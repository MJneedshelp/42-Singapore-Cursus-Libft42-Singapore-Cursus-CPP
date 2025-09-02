/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/09/02 19:38:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Database.hpp"
#include "BitcoinExchange.hpp"

/* Description: checks if there is a valid number of input arguments: 2
*/

bool	validInArgs(int argc)
{
	if (argc != 2)
	{
		std::cerr << ERR_NOARG << std::endl;
		return (false);
	}
	return (true);
}


int	main(int argc, char *argv[])
{
	if (validInArgs(argc) == false)
		return (1);


	/* Try to read the input files */
	try
	{
		BitcoinExchange	btc(std::string(argv[1]), '|');

		btc._input.printMap();

		std::cout << "\n========== Test valid date check ==========" << std::endl;
		std::multimap<std::string, int>	cal1;
		std::multimap<std::string, int>	cal2;
		std::multimap<std::string, int>	cal3;
		std::multimap<std::string, int>	cal4;
		std::multimap<std::string, int>	cal5;

		/* 2025-13-25 */
		cal1.insert(std::make_pair(CAL_KEY_YYYY, 2025));
		cal1.insert(std::make_pair(CAL_KEY_MM, 13));
		cal1.insert(std::make_pair(CAL_KEY_DD, 25));
		std::cout << cal1.find(CAL_KEY_YYYY)->second << "-" << cal1.find(CAL_KEY_MM)->second \
		<< "-" << cal1.find(CAL_KEY_DD)->second << ": " << btc._isValidDate(cal1) << std::endl;





	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
		return (1);
	}

	// std::string		s1("2011-01-03");
	// std::string		s2("2011-01-03");
	// std::string		s3("2001-42-42");
	// std::string		s4("2011-01-09");


	// /* Test out string compare -> probably use for finding the closest date */
	// std::cout << s1.compare(s2) << std::endl;
	// std::cout << s1.compare(s3) << std::endl;
	// std::cout << s1.compare(s4) << std::endl;






	return (0);
}
