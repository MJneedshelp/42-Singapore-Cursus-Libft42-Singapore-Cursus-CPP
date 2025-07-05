/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/05 15:55:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*Description: Constructors and Destructors
*/
WrongAnimal::WrongAnimal(void): type(DEF_WRONG_ANIMAL_TYPE)
{
	std::cout << "[Default WrongAnimal Constructor] And on the 6th day, animals were created. Mew mew mew!" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "[Copy WrongAnimal Constructor] You were created by humans to obey humans!!" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[Default WrongAnimal Destructor] And all the animals were wiped out in the flood..." << std::endl;
	return;
}


/* Description: Copy assignment operator
*/
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "bkseikbkKWSAEFHB" << std::endl;
	return;
}


