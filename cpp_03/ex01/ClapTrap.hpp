/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:19:27 by mintan            #+#    #+#             */
/*   Updated: 2025/07/01 07:59:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

/* Original Values */
#define DEFAULT_CLAP_HP 10
#define DEFAULT_CLAP_EP 10
#define DEFAULT_CLAP_ATK 0
#define DEFAULT_CLAP_REPAIR 1
#define DEFAULT_CLAP_ENERGYCONS 1


/* Test Values */
// #define DEFAULT_HP 5
// #define DEFAULT_EP 3
// #define DEFAULT_ATK 2
// #define DEFAULT_REPAIR 1

class	ClapTrap
{
	public:
		ClapTrap(std::string name, int hp, int ep, int atk);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap&		operator=(ClapTrap const &src);

		/* Public Member Functions */
		virtual void	attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		/* Getters */
		std::string		getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEP(void) const;
		unsigned int	getAtk(void) const;

	protected:
		/* ClapTrap attributes */
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_atk;

		/* Setters */
		void	_setStats(std::string name, int hp, int ep, int atk);
		void	_setStats(int hp, int ep);
		void	_setStats(int ep);

};

std::ostream&	operator<<(std::ostream &o, ClapTrap const &inst);

#endif
