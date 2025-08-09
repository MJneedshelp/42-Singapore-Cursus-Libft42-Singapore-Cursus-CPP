/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:23 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 19:24:43 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

/* Default Destructor */
template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destructor" << std::endl;
	delete [](this->_array);
}





/* Getter */
template<typename T>
T&	Array<T>::operator[](unsigned int idx)
{
	return (this->_array[idx]);
}

/* Setter */
template<typename T>
void	Array<T>::setArr(unsigned int idx, T elem)
{
	this->_array[idx] = elem;
}
