/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:40:25 by mintan            #+#    #+#             */
/*   Updated: 2025/09/06 18:46:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "Database.hpp"
#include <limits.h>
#include <cstdlib>

#define ERR_DATE_INVALID "[ERROR] Dates should be in the yyyy-mm-dd format \
and must exist in the calendar: "
#define ERR_VALUE_INVALID "[ERROR] Values should be 0 <= value (int / float) <= 1000: "
#define ERR_DATE_EARLY "[ERROR] There is no data earlier than the provided date: "

#define INPUT_KEY_DATE "date"
#define CAL_KEY_YYYY "yyyy"
#define CAL_KEY_MM "mm"
#define CAL_KEY_DD "dd"
#define DELIM_DATE '-'
#define RNG_VAL_LOW 0
#define RNG_VAL_UPPER 1000

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string const &inputPath, char const &delim);
		~BitcoinExchange();

		Database	_data;
		Database	_input;

		/* Type Definitions - Alias */
		typedef	std::multimap<std::string, int>					calendar;
		typedef	std::multimap<std::string, int>::const_iterator	itCal;

		/* Main function */
		void	calculate()	const;

	private:
		/* OCF which will not be implemented */
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange& operator=(BitcoinExchange const &src);

		/* Helper functions */
		static	bool	_isPosInt(std::string const &input);
		static	bool	_withinIntLimits(std::string const &input);
		static	bool	_isPosFloat(std::string const &input);
		static	bool	_isWithinRange(int lower, int upper, int val);
		static	bool	_isWithinRange(int lower, int upper, float val);
		static	bool	_isValidMonth(int const month);
		static	bool	_isValidDay(int const day);
		static	bool	_isLeapYear(int const year);
		static	bool	_isValidDate(calendar &cal);
		static	bool	_populateCal(std::string const &date, calendar &cal);
		static	bool	_isValidInput(Database::mmCIt &it, calendar &cal);
		Database::mmCIt	_findClosestData(std::string const &key)	const;
};
#endif
