/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:32:25 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 12:40:57 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

#define MSG_ARISE "BraiiiiiiinnnzzzZ..."
#define MSG_PUNCH "Left hook, right hook, uppercut!"

class	Zombie
{

	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		void	punch(void);


	private:
		std::string	_name;
};

#endif

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

