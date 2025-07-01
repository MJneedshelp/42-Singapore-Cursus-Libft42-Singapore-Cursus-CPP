/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:54:53 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 19:07:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


int	main(void)
{
	std::cout << "\n========Test: Constructors========" << std::endl;
	DiamondTrap	dt1("DiamondDust");
	DiamondTrap	dt2(dt1);

	std::cout << "Memory address of dt1: " << &dt1 << std::endl;
	std::cout << "Memory address of dt2: " << &dt2 << std::endl;


	// std::cout << "\n========Test: Member functions========" << std::endl;
	// ft1.highFiveGuys();
	// ft1.attack("Yggraf");
	// ft3.takeDamage(DEFAULT_FRAG_ATK);
	// ft1.attack("Yggraf");
	// ft3.takeDamage(DEFAULT_FRAG_ATK);
	// ft1.attack("Yggraf");
	// ft3.takeDamage(DEFAULT_FRAG_ATK);
	// ft3.beRepaired(DEFAULT_FRAG_REPAIR);
	// ft1.attack("Yggraf");
	// ft3.takeDamage(DEFAULT_FRAG_ATK);
	// ft3.beRepaired(DEFAULT_FRAG_REPAIR);
	// ft1.attack("Fraggy");
	// std::cout << "Lightning strikes Fraggy! Fraggy is confused!" << std::endl;
	// ft1.attack("Fraggy");
	// ft1.takeDamage(DEFAULT_FRAG_ATK);
	// ft1.attack("Fraggy");
	// ft1.beRepaired(DEFAULT_FRAG_REPAIR);

	// std::cout << "\n========Test: Cross-type pointers========" << std::endl;
	// ClapTrap	*ctPtr = new FragTrap("Ninja", DEFAULT_SCAV_HP, DEFAULT_SCAV_EP, DEFAULT_SCAV_ATK);

	// ctPtr->attack("Nothing");
	// delete(ctPtr);

	std::cout << "\n========Test: Destructors========" << std::endl;
	return (0);
}
