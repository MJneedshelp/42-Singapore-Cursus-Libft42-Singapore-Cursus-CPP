/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reinterpret.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:02:39 by mintan            #+#    #+#             */
/*   Updated: 2025/07/24 15:19:07 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>

int	main(void)
{
	float	a = 42.024f;						//reference value

	void	*b = &a;								//Implicit promotion | float -> void | OK
	int		*c = reinterpret_cast<int*>(b);			//Explicit demotion | void -> int | OK but...
	int		&d = reinterpret_cast<int&>(b);			//you shd already know what type it is already before casting

	std::cout << "Memory of a: " << &a << std::endl;
	std::cout << "Memory of b: " << b << std::endl;
	std::cout << "Memory of c: " << c << std::endl;
	std::cout << "Memory of d: " << &d << std::endl;

	std::cout << std::endl;

	std::cout << "Value of a: " << a << std::endl;
	// std::cout << "Value of b: " << *b << std::endl;
	std::cout << "Value of c: " << *c << std::endl;
	std::cout << "Value of d: " << d << std::endl;

	return (0);



}
