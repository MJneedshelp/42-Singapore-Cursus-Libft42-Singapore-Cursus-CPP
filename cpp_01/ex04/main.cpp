/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:25:15 by mintan            #+#    #+#             */
/*   Updated: 2025/06/17 02:31:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define ERR_NOARG "This programme must be run with 3 args: file, str1, str2!"
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
   reference to the path and the filestream. Attempts to assign the file to
   the filestream
*/

bool	checkFile(const char *path, std::ifstream &ifile)
{
	ifile.open(path);
	return (ifile.is_open());
}

/* Description: generates the name of the replacement file and assigns it
   to the
*/

std::string	generateOfilename(char *ifileName)
{
	std::string	ofileName;

	ofileName = ifileName;
	ofileName = ofileName.append(".replace");
	return (ofileName);
}


int	main(int argc, char *argv[])
{
	std::ifstream	ifile;
	std::ofstream	ofile;
	std::string		line;

	if (validInArgs(argc) == false)
		return (1);
	if (checkFile(argv[1], ifile))
	{
		ofile.open(generateOfilename(argv[1]).c_str());
		while (std::getline(ifile, line))
		{
			ofile << line << std::endl;
		}

		ifile.close();
		ofile.close();
	}
	else
	{
		std::cerr << ERR_INVALFILE << std::endl;

	}
	// std::ifstream	infilestr("numbers");
	// int				dst1;
	// int				dst2;

	// infilestr >> dst1 >> dst2;

	// std::cout << "Dest 1: " << dst1 << " Dest 2: " << dst2 << std::endl;

	// std::ofstream	ofs("outputfile");
	// ofs << "This is sorta useful...." << std::endl;

	std::string	test;

	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			test = argv[i];
			std::cout << test << std::endl;
		}
	}
	return (0);
}
