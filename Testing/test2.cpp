/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:14:48 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 15:08:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


void	byPtr(std::string *str)
{
	*str += " plus pointer";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " plus reference";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int	main(void)
{
	int	no = 42;

	int	*noPtr = &no;
	int	&noRef = no;
	std::string	str;

	std::cout << "No.: " << no << " | ptr: " << *noPtr << " | ref: " << noRef << std::endl;
	*noPtr = 21;
	std::cout << "No.: " << no << " | ptr: " << *noPtr << " | ref: " << noRef << std::endl;
	noRef = 84;
	std::cout << "No.: " << no << " | ptr: " << *noPtr << " | ref: " << noRef << std::endl;

	str = "original";
	std::cout << str << std::endl;
	byPtr(&str);
	std::cout << str << std::endl;
	byConstPtr(&str);
	byRef(str);
	std::cout << str << std::endl;
	byConstRef(str);
	return (0);
}
