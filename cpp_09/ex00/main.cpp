/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:04:41 by mintan            #+#    #+#             */
/*   Updated: 2025/08/28 20:23:49 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Database.hpp"

int	main(void)
{
	/* Try to read the input files */

	try
	{
		Database	in1("input", "input.txt", '|');

		in1.printMap();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
		return (1);
	}






	return (0);
}
