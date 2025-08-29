/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Database.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:30:52 by mintan            #+#    #+#             */
/*   Updated: 2025/08/29 17:39:18 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: class that contains the following main elements:
	1. multimap to store the both the data and the input
	2. Member functions:
		a. take in a file path and parse and store in
		XX fill in later
		XX constructor to take in a file path and check if the file existsd
*/

#ifndef DATABASE_H
# define DATABASE_H

#include <map>
#include <fstream>
#include <iostream>
#include <string>
#include <cctype>

#define ERR_NOARG "This programme must be run with 1 arg: inputfilepath"
#define ERR_FILE "File does not exist or read permissions are not given: "

class Database
{
	public:
		/* OCF */
		Database(std::string const &name, std::string const &path, char const &delim);
		~Database();

		/* Type definitions - Alias */
		typedef	std::multimap<std::string, std::string>					multimap;
		typedef	std::multimap<std::string, std::string>::iterator		mmIt;
		typedef	std::multimap<std::string, std::string>::const_iterator	mmCIt;
		typedef	std::string::iterator									strIt;

		/* Member Functions */
		void	printMap(void)	const;

	private:
		/* Unused OCF - Decide if I want to implement later*/
		Database();
		Database(Database const &src);
		Database&	operator=(Database const &src);

		/* Private members */
		std::string	_name;
		char		_delim;
		multimap	_data;	//store the value as string first. convert at the point of use

		/* Checker + clean-up functions*/
		bool		_checkFile(std::string path, std::ifstream &iFile);
		bool		_isSpace(char c);
		void		_trimLeft(std::string &str);
		void		_trimRight(std::string &str);
		void		_trimStr(std::string &str);
		void		_populateMM(std::ifstream &iFile);
};
#endif
