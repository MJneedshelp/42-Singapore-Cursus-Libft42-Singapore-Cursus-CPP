/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filetest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:55:24 by mintan            #+#    #+#             */
/*   Updated: 2025/07/11 13:06:29 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


void	writeTrees(std::ofstream &f)
{
	f << "    ,*-.    " << std::endl;
	f << "    |  |    " << std::endl;
	f << ",.  |  |    " << std::endl;
	f << "| |_|  | ,. " << std::endl;
	f << "`---.  |_| |" << std::endl;
	f << "    |  .--` " << std::endl;
	f << "    |  |    " << std::endl;
	f << "    |  |    " << std::endl;
}


int	main(void)
{
	std::string		target = "hehe";
	std::ofstream	f1(target + "_shrubbery");

	writeTrees(f1);
	f1.close();
}
