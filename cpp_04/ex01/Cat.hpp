/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 18:48:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_H
# define CAT_H

#include <iostream>
#include <sstream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#define	DEF_CAT_TYPE "CAT"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);
		Cat&		operator=(Cat const &src);
		void		makeSound(void) const;
		void		inception(int idx, std::string thought);
		std::string	meow(int idx) const;
		std::string	getBrainAddr(void) const;

	private:
		Brain	*_catBrain;
};
#endif
