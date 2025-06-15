/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 22:19:56 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 23:23:04 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define MSG_ATK " attacks with their "

/* Description: Class definition for the Human A class:
	- The weapon is a reference because the weapon instance is initialised
	  outside. The weapon can be created outside and then passed to a Human A
	  instance
*/
class HumanA
{
	public:
		HumanA(std::string name, Weapon &arm);
		~HumanA(void);
		void	attack(void);



	private:
		std::string	_name;
		Weapon		&_arm;



};



#endif
