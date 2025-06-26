/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:23:29 by mintan            #+#    #+#             */
/*   Updated: 2025/06/27 03:59:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Description: Default constructor that initialises an instance of ClapTrap
   with default values
*/
ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "Default constructor called";
	std::cout << "Arise ClapTrap: " << name << " | HP: 10 | EP: 10 | ATK: 0" \
	<< std::endl;
	return;
}

/* Description: Copy constructor that copies an instance of ClapTrap
   with default values
*/
ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called";
	*this = src;
	return;
}

/* Description: Default destructor
*/
ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called";
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
	if (this->getEP() == 0)
		std::cout << "ClapTrap: " << this->getName() << " is out of energy!" \
		<< std::endl;
	else
	{
		std::cout << "ClapTrap: " << this->getName() << " attacks " << target \
		<< "causing " << this->getAtk() << "points of damage!" << std::endl;
		this->_setStats(this->getEP() - 1);
	}
	std::cout << this << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getEP() <= 0)
		std::cout << "ClapTrap: " << this->getName() << " is dead already!" \
		<< std::endl;
	else
	{
		std::cout << "ClapTrap: " << this->getName() << " receives " << amount \
		<< "of damage! " << std::endl;
		if (amount > this->getHP())
			

		this->_setStats(this->getEP() - 1);
	}
	std::cout << this << std::endl;
}


/* Getters */
std::string	ClapTrap::getName(void) const
{
	return(this->_name);
}

int	ClapTrap::getHP(void) const
{
	return(this->_hp);
}

int	ClapTrap::getEP(void) const
{
	return(this->_ep);
}

int	ClapTrap::getAtk(void) const
{
	return(this->_atk);
}

/* Setters */
void	ClapTrap::_setStats(std::string name, int hp, int ep, int atk)
{
	this->_name = name;
	this->_hp = hp;
	this->_ep = ep;
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
	o << "Name: " + inst.getName();
	o << " | HP: " + inst.getHP();
	o << " | EP: " + inst.getEP();
	o << " | Atk: " + inst.getAtk();
	return (o);
}



