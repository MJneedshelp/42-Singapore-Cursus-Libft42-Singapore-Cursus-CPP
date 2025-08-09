/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:23 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 08:27:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
{
	std::cout << "Default constructor test" << std::endl;
	this->array = new (T);
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destrucxtor test" << std::endl;
}
