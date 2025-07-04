/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/05 16:57:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

#define	DEF_WRONG_CAT_TYPE "WRONG CAT"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);
		WrongCat&	operator=(WrongCat const &src);
		void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
