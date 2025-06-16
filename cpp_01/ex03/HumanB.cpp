/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:49:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/16 13:06:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	_name(name)
{
	this->_arm = NULL;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon &arm)
{
	this->_arm = &arm;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << MSG_ATK << this->_arm->getType() << std::endl;
}
