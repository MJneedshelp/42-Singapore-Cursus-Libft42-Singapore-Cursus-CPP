/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:55:02 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 08:49:30 by mintan           ###   ########.fr       */
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
	const Animal	*meta = new Animal(DEF_ANIMAL_TYPE);
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();
	const Animal	*l = new Animal(*i);
	const Animal	*m = new Animal(*j);


	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;

	std::cout << "Memory address of i: " << &i << std::endl;
	std::cout << "Memory address of l: " << &l << std::endl;
	std::cout << "Memory address of j: " << &j << std::endl;
	std::cout << "Memory address of m: " << &m << std::endl;

	i->makeSound();
	j->makeSound();
	l->makeSound();
	m->makeSound();

	delete (meta);
	delete (i);
	delete (j);
	delete (l);
	delete (m);

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
