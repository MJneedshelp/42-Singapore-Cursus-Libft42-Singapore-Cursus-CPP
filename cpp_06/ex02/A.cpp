/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:43:17 by mintan            #+#    #+#             */
/*   Updated: 2025/07/31 14:30:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"

A::A(void):	Base()
{
	std::cout << "Instantiating A" << std::endl;;
	return;
}

A::~A(void)
{
	std::cout << "Destroying A" << std::endl;
	return;
}
