/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:51:46 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 12:02:01 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Description: this function creates a zombie on the stack; zombie is
   destroyed when the function ends.
*/
void	randomChump(std::string name)
{
	Zombie	gongYoo(name);

	gongYoo.announce();
}
