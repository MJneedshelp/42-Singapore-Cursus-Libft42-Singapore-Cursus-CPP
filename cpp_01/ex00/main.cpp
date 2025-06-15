/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:12:26 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 12:40:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*mds;

	randomChump("Gong Yoo");
	mds = newZombie("Ma Dong Seok");
	std::cout << "In main train now..." << std::endl;
	mds->punch();
	delete mds;


	return (0);
}
