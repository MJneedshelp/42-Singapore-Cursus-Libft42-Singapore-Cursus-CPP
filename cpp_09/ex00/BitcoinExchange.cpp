/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:49:50 by mintan            #+#    #+#             */
/*   Updated: 2025/09/04 07:03:20 by mintan           ###   ########.fr       */
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
	calendar	cal;

	for (Database::mmCIt it = this->_input.data.begin(); it != this->_input.data.end(); ++it)	//Loop through each key in the input
	{
		if (it->first != INPUT_KEY_DATE)														//ignore if the key is date
		{
			//populate the calendar with the year, month and day from the input key -> bool
			//if the calendar can't even be populated -> format wrong, not int etc
			if (_populateCal(it->first, cal) && _isValidDate(cal))
			{
				//start to match keys from data
				std::cout << "key: " << it->first << " is valid date" << std::endl;

			}
			else
			{
				std::cout << "key: " << it->first << " is invalid date" << std::endl;

			}




		}
		cal.clear();
	}
}





/* Helper functions */
bool	BitcoinExchange::_isPosInt(const std::string &input)
{
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	return (_withinIntLimits(input));
}

bool	BitcoinExchange::_withinIntLimits(const std::string &input)
{
	long	inputLong;

	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
		return (false);
	return(true);
}

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

bool	BitcoinExchange::_isValidDate(calendar &cal)
{
	int	year;
	int	month;
	int	day;

	year = (cal.find(CAL_KEY_YYYY))->second;
	month = (cal.find(CAL_KEY_MM))->second;
	day = (cal.find(CAL_KEY_DD))->second;

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

bool	BitcoinExchange::_populateCal(std::string const &date, calendar &cal)
{
	std::string				ymd;
	std::string::size_type	posSt;
	std::string::size_type	posEnd;

	posSt = 0;
	for (int ctr = 0; ctr < 3; ++ctr)
	{
		if (ctr < 2)
		{
			posEnd = date.find(DELIM_DATE, posSt);
			if (posEnd == date.npos)
				return (false);
			ymd = date.substr(posSt, posEnd - posSt);
			posSt = posEnd + 1;
		}
		else
			ymd = date.substr(posSt, date.npos);
		std::cout << "ymd: " << ymd << std::endl;
		if (!_isPosInt(ymd))
			return (false);
		switch (ctr)
		{
			case 0:
				cal.insert(std::make_pair(CAL_KEY_YYYY, std::atoi(ymd.c_str())));
				break;
			case 1:
				cal.insert(std::make_pair(CAL_KEY_MM, std::atoi(ymd.c_str())));
				break;
			case 2:
				cal.insert(std::make_pair(CAL_KEY_DD, std::atoi(ymd.c_str())));
				break;
			default:
				break;
		}
	}




	return (true);
}
