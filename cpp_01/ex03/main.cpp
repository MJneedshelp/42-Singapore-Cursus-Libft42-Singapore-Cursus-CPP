/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:08:03 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 23:20:48 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	return (0);
}

