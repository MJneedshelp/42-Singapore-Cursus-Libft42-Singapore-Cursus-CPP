/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmaps.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:12:22 by mintan            #+#    #+#             */
/*   Updated: 2025/08/28 12:43:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <iostream>
#include <string>

void	print_map(std::multimap<std::string, unsigned int> mtmp)
{
	for (std::multimap<std::string, unsigned int>::const_iterator it = mtmp.begin(); it != mtmp.end(); ++it)
		std::cout << "[key]: " << it->first << " | [value]: " << it->second << std::endl;
}


int	main(void)
{
	std::multimap<std::string, unsigned int>	mtmp;

	mtmp.insert(std::multimap<std::string, unsigned int>::value_type("k1", 42));
	mtmp.insert(std::multimap<std::string, unsigned int>::value_type("k1", 24));
	print_map(mtmp);

	if (mtmp.find("k1") != mtmp.end())
		std::cout << "Found value: " << mtmp.find("k1")->second << " with key k1" << std::endl;


	return (0);


}


