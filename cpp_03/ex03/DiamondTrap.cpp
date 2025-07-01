/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:23:29 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 17:24:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/* Description: Default constructor that initialises an instance of DiamondTrap
   with default values
*/
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Scavitty Scav! " << *this << std::endl;
	return;
}

/* Description: Copy constructor that copies an instance of ScavTrap
   with default values
*/
ScavTrap::ScavTrap(ScavTrap const &src):
	ClapTrap(src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	std::cout << "[Copy] " << *this << std::endl;
	return;
}

/* Description: Default destructor
*/
ScavTrap::~ScavTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	std::cout << this->getName() << " is scaved!" << std::endl;
	return;
}

/* Description: Copy assignment operator
*/
ScavTrap&	ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
		this->_setStats(src.getName(), src.getHP(), src.getEP(), \
		src.getAtk());
		this->gateKeepMode = src.getMode();
	}
	return (*this);
}

/* Public Member Functions */



