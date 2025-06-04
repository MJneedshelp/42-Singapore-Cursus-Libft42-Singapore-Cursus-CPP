/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:01:44 by mintan            #+#    #+#             */
/*   Updated: 2025/06/05 00:09:31 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Working.class.hpp"

Poor::Poor(void)
{
	std::cout << "Constructing Poor" << std::endl;
	return;
}

Poor::~Poor(void)
{
	std::cout << "Destructing Poor" << std::endl;
	return;
}
