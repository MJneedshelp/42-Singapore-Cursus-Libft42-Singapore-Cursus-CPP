/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 18:50:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

/* Description: Constructors and Destructors
*/
Cat::Cat(void):
	Animal(DEF_CAT_TYPE)
{
	std::cout << "[Default Cat Constructor] Are we the new gods?! Meow!!" << std::endl;
	this->_catBrain = new Brain();
	return;
}

Cat::Cat(Cat const &src):
	Animal(DEF_CAT_TYPE)
{
	std::cout << "[Copy Cat Constructor] Worship me humans!!" << std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout << "[Default Cat Destructor] What happened to the other 8 lives?"\
	<< std::endl;
	delete(this->_catBrain);
	return;
}

/* Description: Copy assignment operator
*/
Cat&	Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->_catBrain = src._catBrain;
	}
	return (*this);
}

/* Public member functions */
void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoooow!" << std::endl;
	return;
}

void	Cat::inception(int idx, std::string thought)
{
	this->_catBrain->setIdea(idx, thought);
}

std::string	Cat::meow(int idx) const
{
	return (this->_catBrain->getIdea(idx));
}

std::string	Cat::getBrainAddr(void) const
{
	std::ostringstream	opStream;

	opStream << this->_catBrain;
	return (opStream.str());
}

