/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:22:57 by mintan            #+#    #+#             */
/*   Updated: 2025/06/18 02:33:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <string>
#include <iostream>
#include <sstream>

#define	MSG_DEBUG "I love having extra bacon for my 7XL-double-cheese-triple \
-pickle-specialketchup burger. I really do!"
#define	MSG_INFO "I cannot believe adding extra bacon costs more money. You \
didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for \
more!"
#define	MSG_WARN "I think I deserve to have some extra bacon for free. I’ve \
been coming for years, whereas you started working here just last month."
#define	MSG_ERR "This is unacceptable! I want to speak to the manager now."

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
