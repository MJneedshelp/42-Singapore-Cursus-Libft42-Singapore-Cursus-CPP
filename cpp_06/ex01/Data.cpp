/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:01:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/30 23:28:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): _intData(0), _floatData(0.0f), _strData("zero")
{
	return;
}

Data::Data(int i, float f, std::string str):
	_intData(i), _floatData(f), _strData(str)
{
	return;
}

Data::~Data(void)
{
	return;
}

int	Data::getInt(void)	const
{
	return(this->_intData);
}

float	Data::getFloat(void)	const
{
	return(this->_floatData);
}

std::string	Data::getStr(void)	const
{
	return(this->_strData);
}

std::ostream&	operator<<(std::ostream &o, Data const &inst)
{
	o << "int: " << inst.getInt() << " | float: " << inst.getFloat() << \
	" | string: " << inst.getStr();
	return (o);
}

