/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Database.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:30:52 by mintan            #+#    #+#             */
/*   Updated: 2025/09/05 01:13:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: class that cleans up the input / data file and stores the
   each entries as a key value pair in the a multimap<string, string>
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

		/* Member + Member Functions */
		multimap	data;
		void		printMap(void)	const;

	private:
		/* Unused OCF */
		Database();
		Database(Database const &src);
		Database&	operator=(Database const &src);

		/* Private members */
		std::string	_name;
		char		_delim;

		/* Checker + clean-up functions*/
		bool		_checkFile(std::string path, std::ifstream &iFile);
		bool		_isSpace(char c);
		void		_trimLeft(std::string &str);
		void		_trimRight(std::string &str);
		void		_trimStr(std::string &str);
		void		_populateMM(std::ifstream &iFile);
};
#endif
