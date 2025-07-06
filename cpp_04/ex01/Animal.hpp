/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 08:46:13 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

#define	DEF_ANIMAL_TYPE "Mew"

class Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &src);
		virtual	~Animal(void);
		Animal&	operator=(Animal const &src);
		std::string		getType(void) const;
		virtual	void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
