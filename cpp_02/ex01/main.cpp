/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 01:57:17 by mintan            #+#    #+#             */
/*   Updated: 2025/06/24 11:36:50 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;

	std::cout << a.toInt() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << c.toInt() << std::endl;
	std::cout << d.toInt() << std::endl;

	// std::cout << a.toFloat() << std::endl;
	// std::cout << b.toFloat() << std::endl;
	// std::cout << c.toFloat() << std::endl;
	// std::cout << d.toFloat() << std::endl;

	// std::ostream	oss;



	return (0);
}
