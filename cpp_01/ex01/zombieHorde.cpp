/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:51:46 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 14:26:12 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Description: this function creates an array of zombies on the heap; returns
   a pointer to the first zombie object in the array so that the zombies can
   be used outside the function scope.
*/

Zombie *zombieHorde(int N, std::string name)
{
	Zombie				*zoms;
	std::ostringstream	oss;
	std::string			num_name;

	zoms = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		oss << i;
		num_name = name + "_" + oss.str();
		zoms[i].setName(num_name);
		zoms[i].announce();
		oss.str("");
		oss.clear();
	}
	return (zoms);
}
