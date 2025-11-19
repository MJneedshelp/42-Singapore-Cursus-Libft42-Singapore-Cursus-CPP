/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:38:48 by mintan            #+#    #+#             */
/*   Updated: 2025/11/19 13:54:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test()
{
	return;
}

Test::~Test()
{
	return;
}

void	Test::addVecItem(int i)
{
	this->_myVec.push_back(i);
}

Test::vecInt&	Test::getVec()
{
	return (this->_myVec);
}

std::ostream&	operator<<(std::ostream &o, Test &src)
{
	for (Test::itVecInt it = src.getVec().begin(); it != src.getVec().end(); ++it)
	{
		o << *it << ", ";
	}
	return (o);
}

