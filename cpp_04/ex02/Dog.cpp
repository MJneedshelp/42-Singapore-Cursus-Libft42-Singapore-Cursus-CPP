/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/08 06:08:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"

/*Description: Constructors and Destructors
*/
Dog::Dog(void):
	Animal(DEF_DOG_TYPE), _dogBrain(new Brain())
{
	std::cout << "[Default Dog Constructor] Run jump run!" << std::endl;
	return;
}

Dog::Dog(Dog const &src):
	Animal(DEF_DOG_TYPE)
{
	std::cout << "[Copy Dog Constructor] Woah who's this handsome dog?" << std::endl;
	this->_dogBrain = new Brain(*(src._dogBrain));
	return;
}

Dog::~Dog(void)
{
	std::cout << "[Default Dog Destructor] Woof woof...." << std::endl;
	delete(this->_dogBrain);
	return;
}

/* Description: Copy assignment operator
*/
Dog&	Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		this->type = src.type;
		if (this->_dogBrain)
			delete (this->_dogBrain);
		this->_dogBrain = new Brain(*(src._dogBrain));
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return;
}

void	Dog::inception(int idx, std::string thought)
{
	this->_dogBrain->setIdea(idx, thought);
}

std::string	Dog::woof(int idx) const
{
	return (this->_dogBrain->getIdea(idx));
}

std::string	Dog::getBrainAddr(void) const
{
	std::ostringstream	opStream;

	opStream << this->_dogBrain;
	return (opStream.str());
}
