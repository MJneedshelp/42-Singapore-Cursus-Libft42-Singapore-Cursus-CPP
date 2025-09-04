/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:40:25 by mintan            #+#    #+#             */
/*   Updated: 2025/09/04 15:55:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "Database.hpp"
#include <limits.h>
#include <cstdlib>

#define ERR_DATE_INVALID "[ERROR] Dates should be in the format yyyy-mm-dd: "
#define ERR_VALUE_INVALID "[ERROR] Values should be 0 <= value (int / float) <= 1000: "


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

		/* Type definitions - Alias */
		typedef	std::multimap<std::string, int>					calendar;
		typedef	std::multimap<std::string, int>::const_iterator	itCal;


		/* Main function */
		void	calculate()	const;	//function to evaluate each of the keys for year, month, day. iterate through


	private:
		/* OCF which will not be implemented */
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange& operator=(BitcoinExchange const &src);


		/* Private members */
		// Database	_data;
		// Database	_input;



		/* Helper functions */
		static	bool	_isPosInt(std::string const &input);
		static	bool	_withinIntLimits(std::string const &input);
		static	bool	_isPosFloat(std::string const &input);
		static	bool	_isWithinRange(int lower, int upper, int val);
		static	bool	_isWithinRange(int lower, int upper, float val);
		static	bool	_isValidMonth(int const month);	//int between 1 and 12
		static	bool	_isValidDay(int const day);		//int between 1 and 31
		static	bool	_isLeapYear(int const year);		//checks if the year is a leap year
		static	bool	_isValidDate(calendar &cal);	//check valid month and day combination, also check for leap years
		static	bool	_populateCal(std::string const &date, calendar &cal);
		static	bool	_isValidInput(Database::mmCIt &it, calendar &cal);







};

#endif
