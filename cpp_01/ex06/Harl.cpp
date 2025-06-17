/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:27:17 by mintan            #+#    #+#             */
/*   Updated: 2025/06/18 04:00:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(int argc, char *argv[])
{
	this->setLevel(argc, argv);
	this->complain();
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::complain(void) const
{
	switch (this->_level)
	{
		case 0:
			this->debug();
			// fall through
		case 1:
			this->info();
			// fall through
		case 2:
			this->warning();
			// fall through
		case 3:
			this->error();
			// fall through
		default:
			std::cout << MSG_DEF << std::endl;
			break;
	}
}

void	Harl::debug(void) const
{
	std::cout << MSG_DEBUG <<  std::endl;
}

void	Harl::info(void) const
{
	std::cout << MSG_INFO <<  std::endl;
}

void	Harl::warning(void) const
{
	std::cout << MSG_WARN <<  std::endl;
}

void	Harl::error(void) const
{
	std::cout << MSG_ERR <<  std::endl;
}

void	Harl::setLevel(int argc, char *argv[])
{
	std::string	lv;

	if (argc == 1 || argc > 2)
		this->_level = 4;
	else
	{
		lv = argv[1];
		if (lv == "DEBUG")
			this->_level = 0;
		else if (lv == "INFO")
			this->_level = 1;
		else if (lv == "WARNING")
			this->_level = 2;
		else if (lv == "ERROR")
			this->_level = 3;
		else
			this->_level = 4;
	}
}

