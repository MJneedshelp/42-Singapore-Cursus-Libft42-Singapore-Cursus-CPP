/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:23:29 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 23:55:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Description: Default constructor that initialises an instance of DiamondTrap
   with default values
*/
DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name", DEFAULT_CLAP_HP, DEFAULT_CLAP_EP, DEFAULT_CLAP_ATK),
	ScavTrap(name), FragTrap(name), _name(name)
{
	this->_name = name;
	this->_hp = DEFAULT_FRAG_HP;
	this->_ep = DEFAULT_SCAV_EP;
	this->_atk = DEFAULT_FRAG_ATK;
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Diamonddy Dia! " << *this << std::endl;
	std::cout << *this << std::endl;
	return;
}

/* Description: Copy constructor that copies an instance of DiamondTrap
   with default values
*/
DiamondTrap::DiamondTrap(DiamondTrap const &src):
	ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = src.getName();
	*this = src;
	std::cout << "[Replicate] " << *this << std::endl;
	return;
}

/* Description: Default destructor
*/
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	std::cout << this->getName() << " is crystallised!" << std::endl;
	return;
}

/* Description: Copy assignment operator
*/
DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_setStats(this->_name + "_clap_name", src.getHP(), src.getEP(), \
		src.getAtk());
		this->gateKeepMode = src.getMode();
	}
	return (*this);
}

/* Public Member Functions */
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "Whooooo aaaaaaammmmmm I......." << std::endl;
	std::cout << "DiamondTrap: " << this->_name << std::endl;
	std::cout << "ClapTrap: " << this->ClapTrap::_name << std::endl;
	std::cout << *this << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return(this->_name);
}

/* Description: << operator overload to print out stats of the DiamondTrap
   instance
*/
std::ostream&	operator<<(std::ostream &o, DiamondTrap const &inst)
{
	o << "Name: " << inst.getName() << " | HP: " << inst.getHP() << \
	" | EP: " << inst.getEP() << " | Atk: " << inst.getAtk() << \
	" | Gatekeep Mode: " << inst.getMode();
	return (o);
}
