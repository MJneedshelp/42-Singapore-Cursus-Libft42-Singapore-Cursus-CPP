/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:54:53 by mintan            #+#    #+#             */
/*   Updated: 2025/06/28 00:58:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\n========Test: Constructors========" << std::endl;
	ClapTrap	cp1("ClapClap");
	ClapTrap	cp2(cp1);
	ClapTrap	cp3("PratPlac");
	ClapTrap	cp4("TappCarl");


	std::cout << "Memory address of cp1: " << &cp1 << std::endl;
	std::cout << "Memory address of cp2: " << &cp2 << std::endl;

	std::cout << "\n========Test: member functions========" << std::endl;
	cp1.attack("PratPlac");
	cp3.takeDamage(DEFAULT_ATK);
	cp3.beRepaired(DEFAULT_REPAIR);
	cp3.beRepaired(DEFAULT_REPAIR);
	cp1.attack("PratPlac");
	cp3.takeDamage(DEFAULT_ATK);
	cp3.beRepaired(DEFAULT_REPAIR);
	cp3.beRepaired(DEFAULT_REPAIR);
	cp1.attack("PratPlac");
	cp3.takeDamage(DEFAULT_ATK);
	cp1.attack("PratPlac");
	cp4.attack("PratPlac");
	cp3.takeDamage(DEFAULT_ATK);
	cp4.attack("PratPlac");
	cp3.takeDamage(DEFAULT_ATK);
	cp3.attack("TappCarl");
	cp3.beRepaired(DEFAULT_REPAIR);

	std::cout << "\n========Test: Destructors========" << std::endl;
	return (0);
}
