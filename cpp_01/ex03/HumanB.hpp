/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 22:19:56 by mintan            #+#    #+#             */
/*   Updated: 2025/06/16 12:56:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define MSG_ATK " attacks with their "

/* Description: Class definition for the Human B class:
	- The weapon is a reference because the weapon instance is initialised
	  outside. The weapon can be created outside and then passed to a Human A
	  instance
*/
class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &arm);

	private:
		std::string	_name;
		Weapon		*_arm;
};



#endif
