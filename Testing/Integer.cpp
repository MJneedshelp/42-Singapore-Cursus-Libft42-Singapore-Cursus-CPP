/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 03:55:50 by mintan            #+#    #+#             */
/*   Updated: 2025/06/20 13:12:03 by mintan           ###   ########.fr       */
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

Integer Integer::operator+(Integer const &rhs) const
{
	Integer	add(this->_n + rhs.getValue());

	std::cout << "Operator:+ called add rhs" << std::endl;
	return (add);
}

std::ostream& operator<<(std::ostream &o, Integer const &rhs)
{
	o << rhs.getValue();
	return (o);
}
