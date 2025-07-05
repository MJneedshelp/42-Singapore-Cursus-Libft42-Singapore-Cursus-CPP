/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:40:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/05 16:07:11 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


/*Description: Constructors and Destructors
*/
WrongCat::WrongCat(void):
	WrongAnimal(), type(DEF_WRONG_CAT_TYPE)
{
	std::cout << "[Default WrongCat Constructor] Are we the new gods?! Woooeem!!" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &src):
	WrongAnimal()
{
	std::cout << "[Copy WrongCat Constructor] Worship me humans!!" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[Default WrongCat Destructor] What happened to the other 8 lives?"\
	<< std::endl;
	return;
}


/* Description: Copy assignment operator
*/
WrongCat&	WrongCat::operator=(WrongCat const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wooooeeeem!" << std::endl;
	return;
}


