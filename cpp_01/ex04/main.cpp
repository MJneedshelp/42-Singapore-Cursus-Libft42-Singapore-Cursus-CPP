/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:25:15 by mintan            #+#    #+#             */
/*   Updated: 2025/08/29 09:13:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define ERR_NOARG "This programme must be run with 1 arg: inputfilepath"
#define ERR_INVALFILE "The provided filepath cannot be opened!"



/* Description: checks if there is a valid number of input arguments: 4
*/

bool	validInArgs(int argc)
{
	if (argc != 4)
	{
		std::cerr << ERR_NOARG << std::endl;
		return (false);
	}
	return (true);
}

/* Description: checks if the provided filepath can be read. Takes in a
   reference to the path and the filestream. Attempts to open the provided
   path:
	- if open is unsuccessful: return false
	- if open is successful, try reading
		- if reading is successful, close the file and open it again
		- if reading causes the file to not be good -> likely that provided
		  path is a directory
*/

bool	checkFile(const char *path, std::ifstream &ifile)
{
	std::string	test;
	ifile.open(path);

	if (ifile.is_open())
	{
		ifile >> test;
		if (ifile.good())
		{
			ifile.close();
			ifile.open(path);
			return (true);
		}
		ifile.close();
	}
	return (false);
}

/* Description: generates the name of the replacement file and assigns it
   to the outputf file
*/

std::string	generateOfilename(char *ifileName)
{
	std::string	ofileName;

	ofileName = ifileName;
	ofileName = ofileName.append(".replace");
	return (ofileName);
}


std::string	replaceStr(const std::string &line, const std::string &oldStr, \
	const std::string &newStr)
{
	std::string	result;
	std::string::size_type	posStrt;
	std::string::size_type	posFound;
	std::string::size_type	oldLen;

	posStrt = 0;
	oldLen = oldStr.length();
	do
	{
		posFound = line.find(oldStr, posStrt);
		result = result + line.substr(posStrt, posFound - posStrt);


		if (posFound != std::string::npos)
			result.append(newStr);


		posStrt = posFound + oldLen;
	} while (posFound != std::string::npos);
	return(result);
}


int	main(int argc, char *argv[])
{
	std::ifstream	ifile;
	std::ofstream	ofile;
	std::string		line;
	std::string		replacement;

	if (validInArgs(argc) == false)
		return (1);
	if (checkFile(argv[1], ifile))
	{
		ofile.open(generateOfilename(argv[1]).c_str());
		while (std::getline(ifile, line))
		{
			replacement = replaceStr(line, argv[2], argv[3]);
			ofile << replacement << std::endl;
		}
		ifile.close();
		ofile.close();
	}
	else
	{
		std::cerr << ERR_INVALFILE << std::endl;
	}
	return (0);
}
