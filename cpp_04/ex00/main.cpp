/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:55:02 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 09:17:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "\n========Test: OCF========" << std::endl;
	Animal	animalA;
	Animal	animalF(animalA);
	Cat		animalB;
	Cat		animalC(animalB);
	Dog		animalD;
	Dog		animalE(animalD);

	std::cout << "Memory address of Animal A: " << &animalA << std::endl;
	std::cout << "Memory address of Animal F: " << &animalF << std::endl;
	std::cout << "Memory address of Animal B: " << &animalB << std::endl;
	std::cout << "Memory address of Animal C: " << &animalC << std::endl;
	std::cout << "Memory address of Animal D: " << &animalD << std::endl;
	std::cout << "Memory address of Animal E: " << &animalE << std::endl;

	std::cout << "\n========Test: Animals========" << std::endl;
	const Animal	*meta = new Animal(DEF_ANIMAL_TYPE);
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

	std::cout << "\n========Test: Destructors========" << std::endl;
	return (0);
}
