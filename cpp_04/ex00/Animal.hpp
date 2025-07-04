/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/04 13:43:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_H
# define ANIMAL_H

#include <iostream>

#define	DEF_TYPE "Mew"

class Animal
{
	public:
		Animal(void);
		~Animal(void);
		Animal&	operator=(Animal const &src);
		virtual	void	makeSound();

	protected:
		std::string	type;
};

#endif
