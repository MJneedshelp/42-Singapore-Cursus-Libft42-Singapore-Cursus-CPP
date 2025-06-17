/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:27:17 by mintan            #+#    #+#             */
/*   Updated: 2025/06/18 02:34:12 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	strToInt(const std::string &level)
{
	int	ret;
	std::istringstream Iss;

	Iss.str(level);
	Iss >> ret;
	return (ret);
}

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fx)(void);
	int		lv;

	lv = strToInt(level);
	switch (lv)
	{
		case 0:
			fx = &Harl::debug;
			break;
		case 1:
			fx = &Harl::info;
			break;
		case 2:
			fx = &Harl::warning;
			break;
		case 3:
			fx = &Harl::error;
			break;
		default:
			fx = NULL;
			break;
	}
	(this->*fx)();
}

void	Harl::debug(void)
{
	std::cout << MSG_DEBUG <<  std::endl;
}

void	Harl::info(void)
{
	std::cout << MSG_INFO <<  std::endl;
}

void	Harl::warning(void)
{
	std::cout << MSG_WARN <<  std::endl;
}

void	Harl::error(void)
{
	std::cout << MSG_ERR <<  std::endl;
}
