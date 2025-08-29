/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:40:25 by mintan            #+#    #+#             */
/*   Updated: 2025/08/29 17:13:07 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "Database.hpp"

class BitcoinExchange
{
	public:
		BitcoinExchange(Database::multimap const &input, Database::multimap const &data);
		~BitcoinExchange();


	private:
		/* OCF which will not be implemented */
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange& operator=(BitcoinExchange const &src);

		/* Private members */
		Database::multimap	_input;	//hmmmm instatiate the whole database object in this class
		Database::multimap	_data;



		/* Helper functions */
		bool	_isUnsignedInt(std::string const &input)	const;
		bool	_checkValidDate(std::string const &str)	const;






};

#endif
