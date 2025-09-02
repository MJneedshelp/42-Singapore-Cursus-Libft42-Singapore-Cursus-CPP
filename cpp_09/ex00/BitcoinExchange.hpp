/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:40:25 by mintan            #+#    #+#             */
/*   Updated: 2025/09/02 19:28:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "Database.hpp"

#define ERR_DATE_INVALID "xxxxx"

#define CAL_KEY_YYYY "yyyy"
#define CAL_KEY_MM "mm"
#define CAL_KEY_DD "dd"


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


		static	bool	_isValidDate(calendar cal);	//check valid month and day combination, also check for leap years



	private:
		/* OCF which will not be implemented */
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange& operator=(BitcoinExchange const &src);


		/* Private members */
		// Database	_data;
		// Database	_input;



		/* Helper functions */
		// static	bool	_isInt(std::string const &input)	const;
		// static	bool	_isPositive(std::string const &input)	const;
		// static	bool	_checkValidDate(std::string const &str)	const;

		static	bool	_isValidMonth(int const month);	//int between 1 and 12
		static	bool	_isValidDay(int const day);		//int between 1 and 31
		static	bool	_isLeapYear(int const year);		//checks if the year is a leap year
		// static	bool	_isValidDate(calendar cal);	//check valid month and day combination, also check for leap years





		/* function to split a string by '-' and store in a multimap of 3 keys:
			- year
			- month
			- date
		*/

		/* function to evaluate each of the keys for year, month, day. iterate through
		   and use switch case to call the function to check year month day
		*/






};

#endif
