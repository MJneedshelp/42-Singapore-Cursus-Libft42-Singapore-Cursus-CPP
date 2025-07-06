/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 08:15:08 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 21:25:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define	NO_ANIMALS	5

int	main(void)
{
	std::cout << "\n=============Test Brain=============" << std::endl;
	Brain	*b1 = new Brain();

	b1->setIdea(42, "Hmmm what is life?");
	std::cout << "[Brain 1 Memory address]: " << b1 << std::endl;
	std::cout << "[Brain 1, idea 42]: " << b1->getIdea(42) << std::endl;

	std::cout << "\n========Brain: Deep Copy========" << std::endl;

	Brain	*b2 = new Brain(*b1);

	std::cout << "[Brain 2 Memory address]: " << b2 << std::endl;
	std::cout << "[Brain 2, idea 42]: " << b2->getIdea(42) << std::endl;

	std::cout << "\n========Brain: Destructors========" << std::endl;

	delete(b1);
	delete(b2);

	std::cout << "\n=============Test Cats=============" << std::endl;
	Cat		c1;

	c1.inception(42, "I am feline fine");
	std::cout << "[Cat 1 Memory address]: " << &c1 << std::endl;
	std::cout << "[Cat 1 Brain Memory address]: " << c1.getBrainAddr() << std::endl;
	std::cout << "[Cat 1, idea 42]: " << c1.meow(42) << std::endl;

	std::cout << "\n========Cat: Deep Copy: Constructor========" << std::endl;
	Cat		c2(c1);

	std::cout << "[Cat 2 Memory address]: " << &c2 << std::endl;
	std::cout << "[Cat 2 Brain Memory address]: " << c2.getBrainAddr() << std::endl;
	std::cout << "[Cat 2, idea 42]: " << c2.meow(42) << std::endl;

	std::cout << "\n========Cat: Deep Copy: Assignment Operator========" << std::endl;
	Cat		c3;

	std::cout << "[Cat 3 Memory address]: " << &c3 << std::endl;
	c3 = c1;
	std::cout << "[Cat 3 Brain Memory address]: " << c3.getBrainAddr() << std::endl;
	std::cout << "[Cat 3, idea 42]: " << c3.meow(42) << std::endl;

	std::cout << "\n=============Test Dogs=============" << std::endl;
	Dog		d1;

	d1.inception(24, "Howl you doin'?");
	std::cout << "[Dog 1 Memory address]: " << &d1 << std::endl;
	std::cout << "[Dog 1 Brain Memory address]: " << d1.getBrainAddr() << std::endl;
	std::cout << "[Dog 1, idea 24]: " << d1.woof(24) << std::endl;

	std::cout << "\n========Dog: Deep Copy: Constructor========" << std::endl;
	Dog		d2(d1);

	std::cout << "[Dog 2 Memory address]: " << &d2 << std::endl;
	std::cout << "[Dog 2 Brain Memory address]: " << d2.getBrainAddr() << std::endl;
	std::cout << "[Dog 2, idea 24]: " << d2.woof(24) << std::endl;

	std::cout << "\n========Dog: Deep Copy: Assignment Operator========" << std::endl;
	Dog		d3;

	std::cout << "[Dog 3 Memory address]: " << &d3 << std::endl;
	d3 = d1;
	std::cout << "[Dog 3 Brain Memory address]: " << d3.getBrainAddr() << std::endl;
	std::cout << "[Dog 3, idea 24]: " << d3.woof(24) << std::endl;

	std::cout << "\n================Ex01: It's raining cats and dogs================" << std::endl;

	Animal	*zoo[NO_ANIMALS];

	for (int i = 0; i < NO_ANIMALS; ++i)
	{
		std::cout << "Populating zoo: " << i << std::endl;
		if (i < NO_ANIMALS / 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}

	std::cout << "\n================Ex01: It's getting noisy here...================" << std::endl;

	for (int i = 0; i < NO_ANIMALS; ++i)
	{
		std::cout << "1, 2, 3, Go: " << i << std::endl;
		zoo[i]->makeSound();
	}

	std::cout << "\n================Ex01: Raining Destruction================" << std::endl;

	for (int i = 0; i < NO_ANIMALS; ++i)
	{
		std::cout << "Depopulating zoo: " << i << std::endl;
		delete zoo[i];
	}

	std::cout << "\n=============Test Destructors=============" << std::endl;
	return (0);
}
