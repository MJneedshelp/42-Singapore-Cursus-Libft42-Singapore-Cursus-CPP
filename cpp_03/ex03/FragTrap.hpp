/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:07:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 17:30:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

/* Original Values */
#define DEFAULT_FRAG_HP 100
#define DEFAULT_FRAG_EP 100
#define DEFAULT_FRAG_ATK 30
#define DEFAULT_FRAG_REPAIR 20
#define DEFAULT_FRAG_ENERGYCONS 20

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap&	operator=(FragTrap const &src);

		/* Public Member Functions */
		void	attack(const std::string &target);
		void	highFiveGuys(void) const;
};

#endif
