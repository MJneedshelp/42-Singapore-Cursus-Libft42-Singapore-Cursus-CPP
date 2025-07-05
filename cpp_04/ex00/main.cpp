/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:55:02 by mintan            #+#    #+#             */
/*   Updated: 2025/07/05 16:06:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "\n========Test: Animals========" << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();

	delete (meta);
	delete (i);
	delete (j);

	std::cout << "\n========Test: Wrong Animals========" << std::endl;
	const	WrongAnimal	*atem = new WrongAnimal();
	const	WrongAnimal	*k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;

	atem->makeSound();
	k->makeSound();

	delete (atem);
	delete (k);

	return (0);
}
