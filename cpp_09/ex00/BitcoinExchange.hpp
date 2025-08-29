/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:40:25 by mintan            #+#    #+#             */
/*   Updated: 2025/08/29 22:46:27 by mintan           ###   ########.fr       */
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


	private:
		/* OCF which will not be implemented */
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange& operator=(BitcoinExchange const &src);


		/* Private members */
		// Database	_data;
		// Database	_input;



		/* Helper functions */
		bool	_isUnsignedInt(std::string const &input)	const;
		bool	_checkValidDate(std::string const &str)	const;






};

#endif
