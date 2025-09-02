/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:49:50 by mintan            #+#    #+#             */
/*   Updated: 2025/09/02 17:38:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Constructors and Destructors */
BitcoinExchange::BitcoinExchange(std::string const &inputPath, char const &delim):
	_data("Data", "../data/data.csv", ','),
	_input("Input", inputPath, delim)
{
	return;
}

BitcoinExchange::~BitcoinExchange()
{
	return;
}





/* Helper functions */
bool	BitcoinExchange::_isValidMonth(int const month)
{
	return (month >= 1 && month <= 12);
}

bool	BitcoinExchange::_isValidDay(int const day)
{
	return (day >= 1 && day <= 31);
}

bool	BitcoinExchange::_isLeapYear(int const year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 == 0)
			return (true);
	}
	return (false);
}


bool	BitcoinExchange::_isValidDate(calendar cal)
{
	/* Check validity of each year, month and date values */
	int	month;
	int	day;

	month = (cal.find(CAL_KEY_MM))->second;
	day = (cal.find(CAL_KEY_DD))->second;

	if (!(_isValidMonth(month) && _isValidDay(day)))
		return (false);





	//4,6,9,11 -> NOK if 31
	//leap year


	/* So the rule is this: Years divisible by 400 are leaps years. Years divisible by 100 but not by 400 are
	   NOT leap years. Years not divisible by 100 but divisible by 4 are leap years. Years not divisible by 4
	   are not leap years.
		*/

	//	Divisible by 4?
	//		Yes. Divisible by 100?
	//			Yes. Divisible by 400?
	//				Yes -> Leap year
	//				No	-> not leap year
	//			No -> not leap year
	//		No -> leap year


}

