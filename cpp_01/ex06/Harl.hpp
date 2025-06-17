/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:22:57 by mintan            #+#    #+#             */
/*   Updated: 2025/06/18 03:12:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <string>
#include <iostream>
#include <sstream>

#define	MSG_DEBUG "[ DEBUG ]\nI love having extra bacon for my 7XL-double- \
cheese-triple pickle-specialketchup burger. I really do!\n"
#define	MSG_INFO "[ INFO ]\nI cannot believe adding extra bacon costs more \
money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be \
asking for more!\n"
#define	MSG_WARN "[ WARNING ]\nI think I deserve to have some extra bacon for \
free. I’ve been coming for years, whereas you started working here just last \
month.\n"
#define	MSG_ERR "[ ERROR ]\nThis is unacceptable! I want to speak to the manager \
now0.\n"
#define	MSG_DEF "[ DEFAULT ]\nWhat's worse than a karen is a karen who can't \
spell.\n"

class	Harl
{
	public:
		Harl(int argc, char *argv[]);
		~Harl(void);
		void	complain(void) const;

	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
		void	setLevel(int argc, char *argv[]);
		int		_level;

};

#endif
