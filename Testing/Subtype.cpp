/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Subtype.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:01:17 by mintan            #+#    #+#             */
/*   Updated: 2025/07/04 12:18:48 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef	CHARACTER_CLASS
# define CHARACTER_CLASS

class Character
{
	public:
		virtual void	sayHi();
		// void			sayHi();
};

#endif

#ifndef	STUDENT_CLASS
# define STUDENT_CLASS

class Student: public Character
{
	public:
		void	sayHi();
};

#endif

void	Character::sayHi()
{
	std::cout << "Fxxx off!" << std::endl;
}

void	Student::sayHi()
{
	std::cout << "Hello..." << std::endl;
}

int	main(void)
{
	Character	*a = new Student();
	Student		*b = new Student();

	a->sayHi();
	b->sayHi();

	delete(a);
	delete(b);
}
