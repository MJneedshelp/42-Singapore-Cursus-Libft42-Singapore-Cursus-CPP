/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 08:41:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"


/*Description: Constructors and Destructors
*/
Dog::Dog(void):
	Animal(DEF_DOG_TYPE)
{
	std::cout << "[Default Dog Constructor] Run jump run!" << std::endl;
	return;
}

Dog::Dog(Dog const &src):
	Animal(DEF_DOG_TYPE)
{
	std::cout << "[Copy Dog Constructor] Woah who's this handsome dog?" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "[Default Dog Destructor] Woof woof...." << std::endl;
	return;
}


/* Description: Copy assignment operator
*/
Dog&	Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return;
}


