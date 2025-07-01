/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:23:29 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 10:24:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Description: Default constructor that initialises an instance of ScavTrap
   with default values
*/
ScavTrap::ScavTrap(std::string name, int hp, int ep, int atk):
	ClapTrap(name, hp, ep, atk),
	gateKeepMode(false)
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
void	ScavTrap::attack(const std::string &target)
{
	if (this->getHP() == 0)
		std::cout << "ScavTrap: " << this->getName() << " is too dead to attack..."
		<<std::endl;
	else if (this->getEP() == 0)
		std::cout << "ScavTrap: " << this->getName() << " is too weak to attack..."
		<< std::endl;
	else
	{
		std::cout << "ScavTrap: " << this->getName() << " uses ScavRush on " << target
		<< " causing " << this->getAtk() << " points of damage!" << std::endl;
		if (this->getAtk() == 0)
			std::cout << "(weak sauce..)" << std::endl;
		this->_setStats(this->getEP() - DEFAULT_SCAV_ENERGYCONS);
	}
	std::cout << *this << std::endl;
}

bool	ScavTrap::getMode(void) const
{
	return (this->gateKeepMode);
}

void	ScavTrap::guardGate(void)
{
	if (this->getMode())
	{
		this->gateKeepMode = false;
		std::cout << "Gatekeeper mode: OFF" << std::endl;
	}
	else
	{
		this->gateKeepMode = true;
		std::cout << "Gatekeeper mode: ON" << std::endl;
	}
	std::cout << *this << std::endl;
}

/* Description: << operator overload to print out stats of the ScavTrap
   instance
*/
std::ostream&	operator<<(std::ostream &o, ScavTrap const &inst)
{
	operator<<(o, static_cast<const ClapTrap &>(inst));
	o << " | Gatekeep Mode: " << inst.getMode();
	return (o);
}

