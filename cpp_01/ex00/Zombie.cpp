/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:35:51 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 12:12:11 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Description: Zombie constructor. Initialises the name of the zombie
*/
Zombie::Zombie(std::string name): _name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead....er" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": " << MSG_ARISE << std::endl;
}

void	Zombie::punch(void)
{
	std::cout << this->_name << ": " << MSG_PUNCH << std::endl;
}

