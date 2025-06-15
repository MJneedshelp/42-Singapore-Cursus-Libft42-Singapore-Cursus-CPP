/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:35:51 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 14:05:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Description: Zombie constructor. Initialises the name of the zombie
*/
Zombie::Zombie(void)
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

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

