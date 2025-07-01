/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:23:29 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 17:32:32 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Description: Default constructor that initialises an instance of FragTrap
   with default values
*/
FragTrap::FragTrap(std::string name):
	ClapTrap(name, DEFAULT_FRAG_HP, DEFAULT_FRAG_EP, DEFAULT_FRAG_ATK)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Fragitty Frag! " << *this << std::endl;
	return;
}

/* Description: Copy constructor that copies an instance of FragTrap
   with default values
*/
FragTrap::FragTrap(FragTrap const &src):
	ClapTrap(src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	std::cout << "[Duplicate] " << *this << std::endl;
	return;
}

/* Description: Default destructor
*/
FragTrap::~FragTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	std::cout << this->getName() << " is fragged!" << std::endl;
	return;
}

/* Description: Copy assignment operator
*/
FragTrap&	FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->_setStats(src.getName(), src.getHP(), src.getEP(), \
		src.getAtk());
	}
	return (*this);
}

/* Public Member Functions */
void	FragTrap::attack(const std::string &target)
{
	if (this->getHP() == 0)
		std::cout << "FragTrap: " << this->getName() << " died alr!"
		<<std::endl;
	else if (this->getEP() == 0)
		std::cout << "FragTrap: " << this->getName() << " has no energy left to attack!"
		<< std::endl;
	else
	{
		std::cout << "FragTrap: " << this->getName() << " uses FragCrush on " << target
		<< " causing " << this->getAtk() << " points of damage!" << std::endl;
		if (this->getAtk() == 0)
			std::cout << "(weak sauce..)" << std::endl;
		this->_setStats(this->getEP() - DEFAULT_FRAG_ENERGYCONS);
	}
	std::cout << *this << std::endl;
}

void	FragTrap::highFiveGuys(void) const
{
	std::cout << *this << std::endl;
	std::cout << "1! 2! 3! 4!" << std::endl;
	std::cout << "High 5!" << std::endl;
}
