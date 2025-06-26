/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:19:27 by mintan            #+#    #+#             */
/*   Updated: 2025/06/27 03:38:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap&	operator=(ClapTrap const &src);

		/* Public Member Functions */
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/* Getters */
		std::string	getName(void) const;
		int			getHP(void) const;
		int			getEP(void) const;
		int			getAtk(void) const;

	private:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_atk;

		/* Setters */
		void	_setStats(std::string name, int hp, int ep, int atk);
		void	_setStats(int hp, int ep);
		void	_setStats(int ep);

};

std::ostream&	operator<<(std::ostream &o, ClapTrap const &inst);

#endif
