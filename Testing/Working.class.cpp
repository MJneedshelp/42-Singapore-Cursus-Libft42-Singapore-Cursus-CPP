/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:01:44 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 13:02:23 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Working.class.hpp"

Poor::Poor(char p1, int p2, int const p3):
	name(p1),
	money(p2),
	height(1.67),
	age(p3)
{
	std::cout << "Constructing Poor" << std::endl;
	this->fx_intro();

	this->_selfesteem = 1;
	this->_security();
	return;
}

Poor::~Poor(void)
{
	std::cout << "Destructing Poor" << std::endl;
	return;
}

void	Poor::fx_intro(void) const
{
	std::cout << "Everyday I am working" << std::endl;
	std::cout << "Name: " << this->name <<std::endl;
	std::cout << "Money: " << this->money <<std::endl;
	std::cout << "Height: " << this->height <<std::endl;
	std::cout << "Age: " << this->age <<std::endl;

	return;
}

void	Poor::_security(void) const
{
	std::cout << "Shhhhhh..." << std::endl;

	return;
}
