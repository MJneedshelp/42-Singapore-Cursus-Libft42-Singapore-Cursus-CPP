/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:54:53 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 10:32:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n========Test: Constructors========" << std::endl;
	ClapTrap	ct1("ClapClap", DEFAULT_CLAP_HP, DEFAULT_CLAP_EP, DEFAULT_CLAP_ATK);
	ScavTrap	st1("Scavvy", DEFAULT_SCAV_HP, DEFAULT_SCAV_EP, DEFAULT_SCAV_ATK);
	ScavTrap	st2(st1);
	ScavTrap	st3("Yvvacs", DEFAULT_SCAV_HP, DEFAULT_SCAV_EP, DEFAULT_SCAV_ATK);



	std::cout << "Memory address of ct1: " << &ct1 << std::endl;
	std::cout << "Memory address of st1: " << &st1 << std::endl;
	std::cout << "Memory address of st2: " << &st2 << std::endl;


	std::cout << "\n========Test: member functions========" << std::endl;
	st1.guardGate();
	st1.guardGate();
	st1.attack("ClapClap");
	ct1.takeDamage(DEFAULT_SCAV_ATK);
	st1.attack("Yvvacs");
	st3.takeDamage(DEFAULT_SCAV_ATK);
	st1.attack("Yvvacs");
	st3.takeDamage(DEFAULT_SCAV_ATK);
	st1.attack("Yvvacs");
	st3.takeDamage(DEFAULT_SCAV_ATK);
	st1.attack("Yvvacs");
	st3.takeDamage(DEFAULT_SCAV_ATK);
	st1.attack("Yvvacs");
	for (int i = 0; i < 50; ++i)
		st3.beRepaired(DEFAULT_SCAV_REPAIR);
	st3.beRepaired(DEFAULT_SCAV_REPAIR);
	std::cout << "Lightning strikes Scavvy - copy!!" << std::endl;
	st2.takeDamage(1000);
	st2.beRepaired(DEFAULT_SCAV_REPAIR);




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
