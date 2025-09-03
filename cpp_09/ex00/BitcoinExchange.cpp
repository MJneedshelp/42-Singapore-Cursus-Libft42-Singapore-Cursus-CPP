/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:49:50 by mintan            #+#    #+#             */
/*   Updated: 2025/09/03 08:56:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Database.hpp"

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

/* Main function */

/* Description: main function to extract each of the entries in the input and
   calculate the value by multiplying it with the corresponding exchange rate
*/
void	BitcoinExchange::calculate()	const
{
	for (Database::mmCIt it = this->_input.data.begin(); it != this->_input.data.end(); ++it)	//Loop through each key in the input
	{
		if (it->first == INPUT_KEY_DATE)														//ignore if the key is date
		{
			std::cout << "works" << std::endl;
		}
		std::cout << "key: " << it->first << std::endl;
	}
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
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return (true);
            return (false);
        }
        return (true);
    }
    return (false);
}


bool	BitcoinExchange::_isValidDate(calendar cal)
{
	int	year;
	int	month;
	int	day;

	year = (cal.find(CAL_KEY_YYYY))->second;
	month = (cal.find(CAL_KEY_MM))->second;
	day = (cal.find(CAL_KEY_DD))->second;

	std::cout << year << "-" << month << "-" << day << ": ";
	if (!(_isValidMonth(month) && _isValidDay(day)))
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 31))
		return (false);
	if (month == 2 && day > 29)
		return (false);
	if ((month == 2 && day == 29) && !_isLeapYear(year))
		return (false);
	return (true);
}

