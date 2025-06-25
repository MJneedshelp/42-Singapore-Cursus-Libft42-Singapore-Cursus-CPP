/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 01:57:17 by mintan            #+#    #+#             */
/*   Updated: 2025/06/25 13:43:36 by mintan           ###   ########.fr       */
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

	Fixed	s(42);
	Fixed	const t(s);
	Fixed	const u(42.01f);
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

	Fixed	const e(Fixed(5.05f) + Fixed(5.05f));
	Fixed	const f(Fixed(5.05f) + Fixed(2));
	Fixed	const g(Fixed(5.05f) - Fixed(5.05f));
	Fixed	const h(Fixed(5.05f) - Fixed(2));
	Fixed	const i(Fixed(5.05f) * Fixed(5.05f));
	Fixed	const j(Fixed(5.05f) * Fixed(2));
	Fixed	const k(Fixed(5.05f) / Fixed(5.05f));
	Fixed	const l(Fixed(5.05f) / Fixed(2.5f));
	Fixed	const m(Fixed(5.05f) / Fixed(2));

	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "j: " << j << std::endl;
	std::cout << "k: " << k << std::endl;
	std::cout << "l: " << l << std::endl;
	std::cout << "m: " << m << std::endl;

	return (0);
}
