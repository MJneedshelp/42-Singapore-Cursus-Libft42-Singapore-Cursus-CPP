/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 03:55:50 by mintan            #+#    #+#             */
/*   Updated: 2025/06/20 04:35:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer(int const n): _n(n)
{
	std::cout << "Constructor called with: " << n << std::endl;
	return;
}

Integer::~Integer(void)
{
	std::cout << "Destructor called with: " << this->getValue() << std::endl;
	return;
}

int	Integer::getValue(void) const
{
	return (this->_n);
}

Integer& Integer::operator=(Integer const &rhs)
{
	std::cout << "Operator:= called to assign rhs to this->_n" << std::endl;
	this->_n = rhs.getValue();
	return (*this);
}
