/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 01:57:17 by mintan            #+#    #+#             */
/*   Updated: 2025/06/26 02:39:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	std::cout << "========Test ++/-- operator overload========" << std::endl;
	Fixed a;

	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a-- is " << a-- << std::endl;
	std::cout << "a is " << a << std::endl;

	std::cout << "========Test comparison operator overload========" << std::endl;
	Fixed	s(42);
	Fixed	const t(s);
	Fixed	const u(42.01f);
	Fixed	const v(u);
	Fixed	const x(24);
	Fixed	const y(24.24f);

	std::cout << "s: " << s << " | t: " << t << " | s > t: " << (s > t) << std::endl;
	std::cout << "s: " << s << " | y: " << y << " | s > y: " << (s > y) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s > u: " << (s > u) << std::endl;

	std::cout << "s: " << s << " | t: " << t << " | s < t: " << (s < t) << std::endl;
	std::cout << "s: " << s << " | y: " << y << " | s < y: " << (s < y) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s < u: " << (s < u) << std::endl;

	std::cout << "s: " << s << " | t: " << t << " | s >= t: " << (s >= t) << std::endl;
	std::cout << "s: " << s << " | y: " << y << " | s >= y: " << (s >= y) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s >= u: " << (s >= u) << std::endl;

	std::cout << "s: " << s << " | t: " << t << " | s <= t: " << (s <= t) << std::endl;
	std::cout << "s: " << s << " | y: " << y << " | s <= y: " << (s <= y) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s <= u: " << (s <= u) << std::endl;

	std::cout << "s: " << s << " | t: " << t << " | s == t: " << (s == t) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s == u: " << (s == u) << std::endl;

	std::cout << "s: " << s << " | t: " << t << " | s != t: " << (s != t) << std::endl;
	std::cout << "s: " << s << " | u: " << u << " | s != u: " << (s != u) << std::endl;

	std::cout << "========Test arithmetic operator overload========" << std::endl;
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

	std::cout << "========Test max/min overloaded functions========" << std::endl;
	Fixed	const o( 10 );
	Fixed	const p( 42.42f );
	Fixed	q(o);
	Fixed	r(p);

	std::cout << "min(" << o << " , " << p << "): " << Fixed::min(o, p) << std::endl;
	std::cout << "o address: " << &o << " | p address: " << &p << " | result address: " \
	<< &(Fixed::min(o, p)) << std::endl;

	std::cout << "min(" << q << " , " << r << "): " << Fixed::min(q, r) << std::endl;
	std::cout << "q address: " << &q << " | r address: " << &r << " | result address: " \
	<< &(Fixed::min(q, r)) << std::endl;

	std::cout << "max(" << o << " , " << p << "): " << Fixed::max(o, p) << std::endl;
	std::cout << "o address: " << &o << " | p address: " << &p << " | result address: " \
	<< &(Fixed::max(o, p)) << std::endl;

	std::cout << "max(" << q << " , " << r << "): " << Fixed::max(q, r) << std::endl;
	std::cout << "q address: " << &q << " | r address: " << &r << " | result address: " \
	<< &(Fixed::max(q, r)) << std::endl;

	return (0);
}
