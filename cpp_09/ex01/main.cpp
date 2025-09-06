/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/09/06 21:38:38 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Description: checks if there is a valid number of input arguments: 2
*/
bool	validInArgs(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << ERR_NOARG << std::endl;
		return (false);
	}
	if (std::string(argv[1]).empty())
	{
		std::cerr << ERR_EMPTYARG << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	if (validInArgs(argc, argv) == false)
		return (1);

	std::string	input(argv[1]);
	RPN			obj(input);

	obj.printStack();

	return (0);

}













