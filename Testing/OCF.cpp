/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OCF.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:49:40 by mintan            #+#    #+#             */
/*   Updated: 2025/06/22 10:08:15 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OCF.hpp"

OCF::OCF(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

OCF::OCF(int const n): _n(n)	//Constructor that initialises ojects with specific values
{
	std::cout << "Parametric constructor called" << std::endl;
	return;
}

OCF::OCF(OCF const &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
	return;
}

OCF::~OCF(void)
{
	std::cout << "Desctructor called" << std::endl;
	return;
}

OCF&	OCF::operator=(OCF const &rhs)
{
	std::cout << "Assignment using operator:= called" << std::endl;
	this->_n = rhs.getVal();
	return (*this);
}




