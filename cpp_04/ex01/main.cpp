/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 08:15:08 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 19:35:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << "\n=============Test Brain=============" << std::endl;
	Brain	*b1 = new Brain();

	b1->setIdea(42, "Hmmm what is life?");
	std::cout << "42nd thought in [Brain 1]: " << b1->getIdea(42) << std::endl;

	std::cout << "\n========Brain: Deep Copy========" << std::endl;

	Brain	*b2 = new Brain(*b1);

	std::cout << "42nd thought in [Brain 1 copy]: " << b2->getIdea(42) << std::endl;

	std::cout << "\n========Brain: Destructors========" << std::endl;

	delete(b1);
	delete(b2);

	std::cout << "\n=============Test Cat=============" << std::endl;
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



	std::cout << "\n=============Test Destructors=============" << std::endl;
	return (0);
}
