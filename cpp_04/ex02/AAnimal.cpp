/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/08 06:07:31 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*Description: Constructors and Destructors
*/
Animal::Animal(void): type(DEF_ANIMAL_TYPE)
{
	std::cout << "[Default Animal Constructor] And on the 6th day, animals were created. Mew mew mew!" << std::endl;
	return;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "[Parametric Animal Constructor] And on the 6th day, animals were created. Mew mew mew!" << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << "[Copy Animal Constructor] You were created by humans to obey humans!!" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << "[Default Animal Destructor] And all the animals were wiped out in the flood..." << std::endl;
	return;
}


/* Description: Copy assignment operator
*/
Animal&	Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}


