/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 20:23:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_H
# define DOG_H

#include <iostream>
#include <sstream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#define	DEF_DOG_TYPE "DOG"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
		Dog&		operator=(Dog const &src);
		void		makeSound(void) const;
		void		inception(int idx, std::string thought);
		std::string	woof(int idx) const;
		std::string	getBrainAddr(void) const;

	private:
		Brain	*_dogBrain;
};

#endif
