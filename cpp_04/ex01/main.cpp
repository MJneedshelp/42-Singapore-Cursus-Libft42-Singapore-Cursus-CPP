/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 08:15:08 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 08:23:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int	main(void)
{
	std::cout << "\n========Test Brain========" << std::endl;
	Brain	*b1 = new Brain();

	b1->setIdea(42, "Hmmm what is life?");
	std::cout << "42nd thought in brain 1: " << b1->getIdea(42) << std::endl;

	Brain	*b2 = new Brain(*b1);
	std::cout << "42nd thought in brain 1 clone: " << b2->getIdea(42) << std::endl;

	delete(b1);
	delete(b2);



	return (0);
}
