/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:51:46 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 12:09:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Description: this function creates a zombie on the heap; returns a pointer
   to the zombie so that the zombie can be used outside the function scope
*/
Zombie	*newZombie(std::string name)
{
	Zombie	*maDongSeok;

	maDongSeok = new Zombie(name);
	(*maDongSeok).announce();
	return (maDongSeok);
}
