/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/09/03 08:57:37 by mintan           ###   ########.fr       */
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

		// btc.calculate();






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












		// std::cout << "\n========== Test valid date check ==========" << std::endl;
		// std::multimap<std::string, int>	cal1;
		// std::multimap<std::string, int>	cal2;
		// std::multimap<std::string, int>	cal3;
		// std::multimap<std::string, int>	cal4;
		// std::multimap<std::string, int>	cal5;
		// std::multimap<std::string, int>	cal6;
		// std::multimap<std::string, int>	cal7;
		// std::multimap<std::string, int>	cal8;
		// std::multimap<std::string, int>	cal9;
		// std::multimap<std::string, int>	cal10;



		// /* 2025-13-25 -> invalid month */
		// cal1.insert(std::make_pair(CAL_KEY_YYYY, 2025));
		// cal1.insert(std::make_pair(CAL_KEY_MM, 13));
		// cal1.insert(std::make_pair(CAL_KEY_DD, 25));
		// std::cout << btc._isValidDate(cal1) << std::endl;

		// /* 2025-11-32 -> invalid day */
		// cal2.insert(std::make_pair(CAL_KEY_YYYY, 2025));
		// cal2.insert(std::make_pair(CAL_KEY_MM, 11));
		// cal2.insert(std::make_pair(CAL_KEY_DD, 32));
		// std::cout << btc._isValidDate(cal2) << std::endl;

		// /* 2025-11-31 -> invalid day x month */
		// cal3.insert(std::make_pair(CAL_KEY_YYYY, 2025));
		// cal3.insert(std::make_pair(CAL_KEY_MM, 11));
		// cal3.insert(std::make_pair(CAL_KEY_DD, 31));
		// std::cout << btc._isValidDate(cal3) << std::endl;

		// /* 2025-09-31 -> invalid day x month */
		// cal4.insert(std::make_pair(CAL_KEY_YYYY, 2025));
		// cal4.insert(std::make_pair(CAL_KEY_MM, 9));
		// cal4.insert(std::make_pair(CAL_KEY_DD, 31));
		// std::cout << btc._isValidDate(cal4) << std::endl;

		// /* 2120-02-30 -> invalid feb */
		// cal5.insert(std::make_pair(CAL_KEY_YYYY, 2120));
		// cal5.insert(std::make_pair(CAL_KEY_MM, 2));
		// cal5.insert(std::make_pair(CAL_KEY_DD, 30));
		// std::cout << btc._isValidDate(cal5) << std::endl;

		// /* 2100-02-29 -> invalid leapyear */
		// cal6.insert(std::make_pair(CAL_KEY_YYYY, 2100));
		// cal6.insert(std::make_pair(CAL_KEY_MM, 2));
		// cal6.insert(std::make_pair(CAL_KEY_DD, 29));
		// std::cout << btc._isValidDate(cal6) << std::endl;

		// /* 1920-02-28 -> valid */
		// cal7.insert(std::make_pair(CAL_KEY_YYYY, 1920));
		// cal7.insert(std::make_pair(CAL_KEY_MM, 2));
		// cal7.insert(std::make_pair(CAL_KEY_DD, 28));
		// std::cout << btc._isValidDate(cal7) << std::endl;

		// /* 1920-12-31 -> valid */
		// cal8.insert(std::make_pair(CAL_KEY_YYYY, 1920));
		// cal8.insert(std::make_pair(CAL_KEY_MM, 12));
		// cal8.insert(std::make_pair(CAL_KEY_DD, 31));
		// std::cout << btc._isValidDate(cal8) << std::endl;

		// /* 1920-02-29 -> valid */
		// cal9.insert(std::make_pair(CAL_KEY_YYYY, 1920));
		// cal9.insert(std::make_pair(CAL_KEY_MM, 2));
		// cal9.insert(std::make_pair(CAL_KEY_DD, 29));
		// std::cout << btc._isValidDate(cal9) << std::endl;

		// /* 1920-05-15 -> valid */
		// cal10.insert(std::make_pair(CAL_KEY_YYYY, 1920));
		// cal10.insert(std::make_pair(CAL_KEY_MM, 5));
		// cal10.insert(std::make_pair(CAL_KEY_DD, 15));
		// std::cout << btc._isValidDate(cal10) << std::endl;
