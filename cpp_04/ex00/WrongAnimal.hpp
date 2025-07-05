/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/05 16:56:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

#define	DEF_WRONG_ANIMAL_TYPE "Mewtwo"

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual	~WrongAnimal(void);
		WrongAnimal&	operator=(WrongAnimal const &src);
		std::string		getType(void) const;
		void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
