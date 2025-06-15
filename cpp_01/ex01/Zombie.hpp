/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:32:25 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 14:19:18 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <sstream>
#include <string>

#define MSG_ARISE "BraiiiiiiinnnzzzZ..."
#define MSG_PUNCH "Left hook, right hook, uppercut!"

class	Zombie
{

	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	punch(void);
		void	setName(std::string name);


	private:
		std::string	_name;
};

#endif

Zombie *zombieHorde(int N, std::string name);

