/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:23:29 by mintan            #+#    #+#             */
/*   Updated: 2025/06/28 14:47:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Description: Default constructor that initialises an instance of ClapTrap
   with default values
*/
ClapTrap::ClapTrap(std::string name, int hp, int ep, int atk):
	_name(name), _hp(hp), _ep(ep), _atk(atk)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Arise! " << *this << std::endl;
	return;
}

/* Description: Copy constructor that copies an instance of ClapTrap
   with default values
*/
ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	std::cout << "[Clone] " << *this << std::endl;
	return;
}

/* Description: Default destructor
*/
ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	std::cout << this->_name << " is destroyed!" << std::endl;
	return;
}

/* Description: Copy assignment operator
*/
ClapTrap&	ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
		this->_setStats(src.getName(), src.getHP(), src.getEP(), \
		src.getAtk());
	return (*this);
}

/* Public Member Functions */
void	ClapTrap::attack(const std::string &target)
{
	if (this->getHP() == 0)
		std::cout << "ClapTrap: " << this->getName() << " tries to attack but is dead already..." \
		<<std::endl;
	else if (this->getEP() == 0)
		std::cout << "ClapTrap: " << this->getName() << " tries to attack but is out of energy!" \
		<< std::endl;
	else
	{
		std::cout << "ClapTrap: " << this->getName() << " attacks " << target \
		<< " causing " << this->getAtk() << " points of damage!" << std::endl;
		if (this->getAtk() == 0)
			std::cout << "(weak sauce..)" << std::endl;
		this->_setStats(this->getEP() - DEFAULT_CLAP_ENERGYCONS);
	}
	std::cout << *this << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() == 0)
		std::cout << "ClapTrap: " << this->getName() << " is dead already..." \
		<< std::endl;
	else
	{
		std::cout << "ClapTrap: " << this->getName() << " receives " << amount \
		<< " damage! " << std::endl;
		if (amount == 0)
			std::cout << "(it's not very effective...)" << std::endl;
		if (amount > this->getHP())
			this->_setStats(0, this->getEP());
		else
			this->_setStats(this->getHP() - amount, this->getEP());
	}
	std::cout << *this << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() == 0)
		std::cout << "ClapTrap: " << this->getName() << " tries to repair itself but is dead already..." \
		<<std::endl;
	else if (this->getEP() == 0)
		std::cout << "ClapTrap: " << this->getName() << " tries to repair itself but is out of energy!" \
		<< std::endl;
	else
	{
		std::cout << "ClapTrap: " << this->getName() << " repairs itself " \
		<< std::endl;
		this->_setStats(this->getHP() + amount, this->getEP() - DEFAULT_CLAP_ENERGYCONS);
	}
	std::cout << *this << std::endl;
}

/* Getters */
std::string	ClapTrap::getName(void) const
{
	return(this->_name);
}

unsigned int	ClapTrap::getHP(void) const
{
	return(this->_hp);
}

unsigned int	ClapTrap::getEP(void) const
{
	return(this->_ep);
}

unsigned int	ClapTrap::getAtk(void) const
{
	return(this->_atk);
}

/* Setters */
void	ClapTrap::_setStats(std::string name, int hp, int ep, int atk)
{
	this->_name = name;
	this->_hp = hp;
	this->_ep = ep;
	this->_atk = atk;
}

void	ClapTrap::_setStats(int hp, int ep)
{
	this->_hp = hp;
	this->_ep = ep;
}

void	ClapTrap::_setStats(int ep)
{
	this->_ep = ep;
}

/* Description: << operator overload to print out stats of the ClapTrap
   instance
*/
std::ostream&	operator<<(std::ostream &o, ClapTrap const &inst)
{
	o << "Name: " << inst.getName() << " | HP: " << inst.getHP() << \
	" | EP: " << inst.getEP() << " | Atk: " << inst.getAtk();
	return (o);
}
