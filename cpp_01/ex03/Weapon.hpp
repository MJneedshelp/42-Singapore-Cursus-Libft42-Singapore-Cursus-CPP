/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:34:15 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 22:53:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <string>
#include <iostream>


/* Description: Weapon class
	- getType(): const before to ensure that the caller cannot modify the
	  string. const after as the function will not modify any member variables
*/

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const	std::string	&getType(void) const;
		void	setType(std::string type);

	private:
		std::string	_type;

};

#endif
