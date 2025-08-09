/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:23 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 21:17:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//disable all these later since it will be read from the header
#include <iostream>
#include <typeinfo>
#include "Array.hpp"

/* Default Constructor */
template<typename T>
Array<T>::Array(void): _arrSz(0)
{
	std::cout << "Default constructor" << std::endl;
	this->_array = new T[0];
}

/* Parametric Constructor */
template<typename T>
Array<T>::Array(unsigned int n): _arrSz(n)
{
	std::cout << "Parametric constructor" << std::endl;
	this->_array = new T[n];
}




/* Assignment Operator Constructor */


/* Default Destructor */
template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destructor" << std::endl;
	delete [](this->_array);
}





/* Getters */
template<typename T>
T&	Array<T>::operator[](unsigned int idx)
{
	if (idx >= this->getArrSz())
		throw (std::exception());
	return (this->_array[idx]);
}

template<typename T>
unsigned int	Array<T>::getArrSz(void)
{
	return (this->_arrSz);
}

template<typename T>
std::string	Array<T>::getType(void)
{
	return (typeid(T).name());
}

/* Setter */
template<typename T>
void	Array<T>::setArr(unsigned int idx, T elem)
{
	this->_array[idx] = elem;
}

/* << Operator */
template<typename T>
std::ostream&	operator<<(std::ostream &o, Array<T> &inst)
{
	o << "==== Array Type: " << inst.getType() << " | Size: " << inst.getArrSz() << " ====" << std::endl;
	o << "==== Contents ====" << std::endl;
	for (unsigned int i = 0; i < inst.getArrSz(); ++i)
	{
		o << "index: " << i << " | content: " << inst[i] << std::endl;
	}
	return (o);
}
