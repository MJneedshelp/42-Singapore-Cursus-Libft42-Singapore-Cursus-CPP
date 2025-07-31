/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:43:17 by mintan            #+#    #+#             */
/*   Updated: 2025/07/31 14:30:46 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"

B::B(void)
{
	std::cout << "Instantiating B" << std::endl;;
	return;
}

B::~B(void)
{
	std::cout << "Destroying B" << std::endl;
	return;
}
