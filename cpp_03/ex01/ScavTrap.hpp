/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:07:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 09:36:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

/* Original Values */
#define DEFAULT_SCAV_HP 100
#define DEFAULT_SCAV_EP 50
#define DEFAULT_SCAV_ATK 20
#define DEFAULT_SCAV_REPAIR 15
#define DEFAULT_SCAV_ENERGYCONS 10

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string name, int hp, int ep, int atk);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap&	operator=(ScavTrap const &src);

		/* Public Member Functions */
		void	attack(const std::string &target);
		void	guardGate(void);
		bool	getMode(void) const;

	private:
		bool	gateKeepMode;
};

std::ostream&	operator<<(std::ostream &o, ScavTrap const &inst);

#endif
