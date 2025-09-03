/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Database.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:52:23 by mintan            #+#    #+#             */
/*   Updated: 2025/09/03 08:50:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Database.hpp"

/* Constructor and Destructors */
Database::Database(std::string const &name, std::string const &path, char const &delim):
	_name(name), _delim(delim)
{
	std::ifstream	iFile;
	std::string		line;

	if (_checkFile(path, iFile))
		this->_populateMM(iFile);
	else
		throw (std::runtime_error(ERR_FILE + path));
}

Database::~Database()
{
	return;
}

/* Member Functions */
void	Database::printMap()	const
{
	std::cout << "[database name]: " << this->_name << std::endl;
	for (mmCIt it = this->data.begin(); it != this->data.end(); ++it)
		std::cout << "[key]: " << it->first << " | [value]: " << it->second << std::endl;
}

/* Checker Functions */

/* Description: checks if the provided filepath can be read. Takes in a
   reference to the path and the filestream. Attempts to open the provided
   path:
	- if open is unsuccessful: return false
	- if open is successful, try reading
		- if reading is successful, close the file and open it again
		- if reading causes the file to not be good -> likely that provided
		  path is a directory
*/

bool	Database::_checkFile(std::string path, std::ifstream &iFile)
{
	std::string	test;
	iFile.open(path.c_str());

	if (iFile.is_open())
	{
		iFile >> test;
		if (iFile.good())
		{
			iFile.close();
			iFile.open(path.c_str());
			return (true);
		}
		iFile.close();
	}
	return (false);
}

void	Database::_populateMM(std::ifstream &iFile)
{
	std::string	line;
	int			pos;
	std::string	key;
	std::string	val;

	while (getline(iFile, line))
	{
		pos = line.find(this->_delim);
		key = line.substr(0, pos);
		if (pos == -1)
			val = "";
		else
			val = line.substr(pos + 1, line.length() - pos);
		this->_trimStr(key);
		this->_trimStr(val);
		this->data.insert(multimap::value_type(key, val));
	}
}

bool	Database::_isSpace(char c)
{
	return(std::isspace(static_cast<unsigned char>(c)));
}

void	Database::_trimLeft(std::string &str)
{
	strIt	itSt;
	strIt	itEnd;

	itSt = str.begin();
	itEnd = itSt;
	if (_isSpace(*itSt))
	{
		while (_isSpace(*(++itEnd)))
			;
	}
	else
		return;
	str.erase(itSt, itEnd);
}

void	Database::_trimRight(std::string &str)
{
	strIt	itSt;
	strIt	itEnd;

	itEnd = str.end();
	itSt = itEnd - 1;
	if (_isSpace(*itSt))
	{
		while (_isSpace(*(itSt - 1)))
			itSt--;
	}
	else
		return;
	str.erase(itSt, itEnd);
}

void	Database::_trimStr(std::string &str)
{
	this->_trimLeft(str);
	this->_trimRight(str);
}

