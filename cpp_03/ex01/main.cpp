/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:54:53 by mintan            #+#    #+#             */
/*   Updated: 2025/06/28 15:14:43 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n========Test: Constructors========" << std::endl;
	ClapTrap	cp1("ClapClap", DEFAULT_CLAP_HP, DEFAULT_CLAP_EP, DEFAULT_CLAP_ATK);
	ScavTrap	st1("Scavvy", DEFAULT_SCAV_HP, DEFAULT_SCAV_EP, DEFAULT_SCAV_ATK);

	std::cout << "Memory address of cp1: " << &cp1 << std::endl;
	std::cout << "Memory address of ct2: " << &st1 << std::endl;

	// std::cout << "\n========Test: member functions========" << std::endl;
	// cp1.attack("PratPlac");
	// cp3.takeDamage(DEFAULT_ATK);
	// cp3.beRepaired(DEFAULT_REPAIR);
	// cp3.beRepaired(DEFAULT_REPAIR);
	// cp1.attack("PratPlac");
	// cp3.takeDamage(DEFAULT_ATK);
	// cp3.beRepaired(DEFAULT_REPAIR);
	// cp3.beRepaired(DEFAULT_REPAIR);
	// cp1.attack("PratPlac");
	// cp3.takeDamage(DEFAULT_ATK);
	// cp1.attack("PratPlac");
	// cp4.attack("PratPlac");
	// cp3.takeDamage(DEFAULT_ATK);
	// cp4.attack("PratPlac");
	// cp3.takeDamage(DEFAULT_ATK);
	// cp3.attack("TappCarl");
	// cp3.beRepaired(DEFAULT_REPAIR);

	std::cout << "\n========Test: Destructors========" << std::endl;
	return (0);
}
