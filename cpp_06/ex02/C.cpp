/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:43:17 by mintan            #+#    #+#             */
/*   Updated: 2025/07/31 14:30:53 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "C.hpp"

C::C(void)
{
	std::cout << "Instantiating C" << std::endl;;
	return;
}

C::~C(void)
{
	std::cout << "Destroying C" << std::endl;
	return;
}
