/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:17:16 by mintan            #+#    #+#             */
/*   Updated: 2025/06/13 17:03:55 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>


bool	isValidInput(const std::string& input)
{
	bool	ret;

	ret = false;
	for (int i = 0; i < input.length(); ++i)
	{
		if (std::isalnum(static_cast<unsigned char>(input[i])))
			ret = true;
	}
	return (ret);
}

int	main(void)
{
	std::string Test;
	std::string Test1;


	// std::cout << "Test";
	// std::cout << std::endl;

	// std::cout << "Type something" << std::endl;
	// std::getline(std::cin, Test);
	// std::cout << "Input: [" << Test << "] " << std::endl;
	// std::cout << "Length of input: [" << Test.length() << "] " << std::endl;

	// Test = "123456789012";
	// std::cout << std::setfill (' ') << std::setw (10);
	// std::cout << Test.substr(0, 8).append(".") << std::endl;

	std::string	Input;
	std::string	Leftovers;
	int			InputNum;

	std::cout << "Enter input: ";
	std::getline(std::cin, Input);
	std::cout << "User Input: " << Input << " | Length: " << Input.length() << std::endl;
	std::cout << "Valid input: " << isValidInput(Input) << std::endl;







	// std::istringstream iss(Input);
	// if ((iss >> InputNum) && !(iss >> Leftovers))
	// 	std::cout << "Input: " << InputNum << std::endl;
	// else
	// {
	// 	std::cout << "Failed extraction" << std::endl;
	// 	std::cout << "Leftover: " << Leftovers << std::endl;


	// }



	return 0;
}
