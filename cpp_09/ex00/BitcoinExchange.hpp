/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:40:25 by mintan            #+#    #+#             */
/*   Updated: 2025/08/30 17:28:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "Database.hpp"

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string const &inputPath, char const &delim);
		~BitcoinExchange();

		Database	_data;
		Database	_input;

		/* Type definitions - Alias */
		typedef	std::multimap<std::string, int>		calendar;
		

	private:
		/* OCF which will not be implemented */
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange& operator=(BitcoinExchange const &src);


		/* Private members */
		// Database	_data;
		// Database	_input;



		/* Helper functions */		
		bool	_isInt(std::string const &input)	const;
		bool	_isPositive(std::string const &input)	const;
		bool	_checkValidDate(std::string const &str)	const;
		
		bool	_isValidMonth(int const month)	const;	//int between 1 and 12
		bool	_isValidDay(int const day)	const;		//int between 1 and 31
		bool	_isLeapYear(int const year) const;		//checks if the year is a leap year
		bool	_isValidDate(calendar cal)	const;	//check valid month and day combination, also check for leap years
	
		


		
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
