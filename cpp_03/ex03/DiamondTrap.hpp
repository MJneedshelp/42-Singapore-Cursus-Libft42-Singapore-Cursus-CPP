/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:07:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 23:56:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);
		DiamondTrap&	operator=(DiamondTrap const &src);

		/* Public Member Functions */
		void			attack(const std::string &target);
		void			whoAmI(void) const;
		std::string		getName(void) const;

	private:
		std::string	_name;
};

std::ostream&	operator<<(std::ostream &o, DiamondTrap const &inst);

#endif
