/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:49:50 by mintan            #+#    #+#             */
/*   Updated: 2025/08/30 15:57:55 by mintan           ###   ########.fr       */
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
bool	BitcoinExchange::_isValidMonth(int const month)	const
{
	return (month >= 1 && month <= 12);
}

bool	BitcoinExchange::_isValidDay(int const day)	const
{
	return (day >= 1 && day <= 31);
}

bool	BitcoinExchange::_isValidDate(calendar cal)	const
{
	
}

