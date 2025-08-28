/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Database.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:52:23 by mintan            #+#    #+#             */
/*   Updated: 2025/08/28 20:40:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Database.hpp"

/* Constructor and Destructors */
Database::Database(std::string name, std::string path, char delim):
	_name(name), _delim(delim)
{
	std::ifstream	iFile;
	std::string		line;

	if (_checkFile(path, iFile))
	{
		//populate multimap
		this->_populateMM(iFile);
		this->_data.insert(multimap::value_type("k1", "v1"));
	}
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
	std::cout << "[name]: " << this->_name << std::endl;
	for (mmCIt it = this->_data.begin(); it != this->_data.end(); ++it)
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
	std::string	subStr;

	while (getline(iFile, line))
	{
		pos = line.find(this->_delim);
		subStr = line.substr(0, pos);
		// for (strIt it = subStr.begin(); it != subStr.end(); ++it)
		// {
		// 	if (*it == ' ')
		// 		subStr.erase(it);
		// }
		std::cout << subStr << std::endl;

	}
		// std::cout << line << std::endl;
}
