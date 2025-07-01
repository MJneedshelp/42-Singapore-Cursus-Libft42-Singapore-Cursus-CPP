/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:54:53 by mintan            #+#    #+#             */
/*   Updated: 2025/07/02 00:07:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


int	main(void)
{
	std::cout << "\n========Test: Constructors========" << std::endl;
	DiamondTrap	dt1("DiamondDust");
	DiamondTrap	dt2(dt1);
	DiamondTrap	dt3("DiamondDirt");

	std::cout << "Memory address of dt1: " << &dt1 << std::endl;
	std::cout << "Memory address of dt2: " << &dt2 << std::endl;

	std::cout << "\n========Test: Member functions========" << std::endl;
	dt1.whoAmI();
	dt1.guardGate();
	dt1.guardGate();
	dt1.highFiveGuys();


	dt1.attack("DiamondDirt");
	dt3.takeDamage(DEFAULT_FRAG_ATK);
	dt3.beRepaired(DEFAULT_SCAV_REPAIR);
	dt1.attack("DiamondDirt");
	dt3.takeDamage(DEFAULT_FRAG_ATK);
	dt1.attack("DiamondDirt");
	dt3.takeDamage(DEFAULT_FRAG_ATK);
	dt1.attack("DiamondDirt");
	dt3.takeDamage(DEFAULT_FRAG_ATK);
	dt1.attack("DiamondDirt");
	dt3.takeDamage(DEFAULT_FRAG_ATK);
	dt3.beRepaired(DEFAULT_SCAV_REPAIR);
	dt1.attack("DiamondDirt");
	dt1.beRepaired(DEFAULT_SCAV_REPAIR);
	dt3.attack("DiamondDust");

	std::cout << "\n========Test: Cross-type pointers========" << std::endl;
	ClapTrap	*ctPtr = new DiamondTrap("Ninja");

	ctPtr->attack("Nothing");
	delete(ctPtr);

	std::cout << "\n========Test: Destructors========" << std::endl;
	return (0);
}
