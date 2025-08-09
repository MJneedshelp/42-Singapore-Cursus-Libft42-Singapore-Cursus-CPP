/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:23 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 10:54:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

/* Default Constructor */
template<typename T>
Array<T>::Array(void): _arrSz(0)
{
	std::cout << "Default constructor" << std::endl;
	this->array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n): _arrSz(n)
{
	std::cout << "Parametric constructor" << std::endl;
	this->array = new T[n];
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destructor" << std::endl;
	delete [](this->array);
}
