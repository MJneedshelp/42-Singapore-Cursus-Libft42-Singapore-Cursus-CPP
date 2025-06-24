/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 01:57:17 by mintan            #+#    #+#             */
/*   Updated: 2025/06/25 00:24:27 by mintan           ###   ########.fr       */
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

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	Fixed	const s(42);
	Fixed	const t(s);
	Fixed	const u(42.42f);
	Fixed	const v(u);
	Fixed	const x(24);
	Fixed	const y(24.24f);

	std::cout << "s: " << s << " | t: " << t << " | s > t: " << (s > t) << std::endl;
	std::cout << "s: " << s << " | t: " << t << " | s >= t: " << (s >= t) << std::endl;
	std::cout << "s: " << s << " | t: " << t << " | s < t: " << (s < t) << std::endl;
	std::cout << "s: " << s << " | t: " << t << " | s <= t: " << (s <= t) << std::endl;
	std::cout << "s: " << s << " | t: " << t << " | s == t: " << (s == t) << std::endl;
	std::cout << "s: " << s << " | t: " << t << " | s != t: " << (s != t) << std::endl;

	std::cout << "s: " << s << " | u: " << u << " | s > u: " << (s > u) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s >= u: " << (s >= u) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s < u: " << (s < u) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s <= u: " << (s <= u) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s == u: " << (s == u) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s != u: " << (s != u) << std::endl;

	return (0);
}
