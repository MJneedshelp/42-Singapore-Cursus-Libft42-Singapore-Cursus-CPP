/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:54:53 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 12:37:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{
	std::cout << "\n========Test: Constructors========" << std::endl;
	ClapTrap	ct1("ClapClap", DEFAULT_CLAP_HP, DEFAULT_CLAP_EP, DEFAULT_CLAP_ATK);
	ScavTrap	st1("Scavvy", DEFAULT_SCAV_HP, DEFAULT_SCAV_EP, DEFAULT_SCAV_ATK);
	FragTrap	ft1("Fraggy", DEFAULT_FRAG_HP, DEFAULT_FRAG_EP, DEFAULT_FRAG_ATK);
	FragTrap	ft2(ft1);
	FragTrap	ft3("Yggraf", DEFAULT_FRAG_HP, DEFAULT_FRAG_EP, DEFAULT_FRAG_ATK);


	std::cout << "Memory address of ft1: " << &ft1 << std::endl;
	std::cout << "Memory address of ft2: " << &ft2 << std::endl;

	std::cout << "\n========Test: Member functions========" << std::endl;
	ft1.highFiveGuys();
	ft1.attack("Yggraf");
	ft3.takeDamage(DEFAULT_FRAG_ATK);
	ft1.attack("Yggraf");
	ft3.takeDamage(DEFAULT_FRAG_ATK);
	ft1.attack("Yggraf");
	ft3.takeDamage(DEFAULT_FRAG_ATK);
	ft3.beRepaired(DEFAULT_FRAG_REPAIR);
	ft1.attack("Yggraf");
	ft3.takeDamage(DEFAULT_FRAG_ATK);
	ft3.beRepaired(DEFAULT_FRAG_REPAIR);
	ft1.attack("Fraggy");
	std::cout << "Lightning strikes Fraggy! Fraggy is confused!" << std::endl;
	ft1.attack("Fraggy");
	ft1.takeDamage(DEFAULT_FRAG_ATK);
	ft1.attack("Fraggy");
	ft1.beRepaired(DEFAULT_FRAG_REPAIR);

	std::cout << "\n========Test: Cross-type pointers========" << std::endl;
	ClapTrap	*ctPtr = new FragTrap("Ninja", DEFAULT_SCAV_HP, DEFAULT_SCAV_EP, DEFAULT_SCAV_ATK);

	ctPtr->attack("Nothing");
	delete(ctPtr);

	std::cout << "\n========Test: Destructors========" << std::endl;
	return (0);
}
