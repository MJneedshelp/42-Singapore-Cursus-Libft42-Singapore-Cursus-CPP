/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/05 17:10:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*Description: Constructors and Destructors
*/
Brain::Brain(void)
{
	std::cout << "[Default Brain Constructor] That's what the apple does." << std::endl;
	return;
}

Brain::Brain(Brain const &src)
{
	std::cout << "[Copy Brain Constructor] Beep! Boop! Beep!" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "[Default Brain Destructor] Faith is belief without proof." << std::endl;
	return;
}

/* Description: Copy assignment operator
*/
Brain&	Brain::operator=(Brain const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < NO_IDEAS; ++i)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

