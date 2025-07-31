/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:31:37 by mintan            #+#    #+#             */
/*   Updated: 2025/07/31 15:29:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <ctime>

Base	*generate(void)
{
	long	randval;
	Base	*p;

	randval = rand() % (3) + 1;
	switch (randval)
	{
		case 1:
		{
			p = new A();
			return (p);
		}
		case 2:
		{
			p = new B();
			return (p);
		}
		case 3:
		{
			p = new C();
			return (p);
		}
		default:
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Base ptr is of type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base ptr is of type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base ptr is of type: C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		std::cout << "Memory address: " << &a << std::endl;
		std::cout << "Base ref is of type: A" << std::endl;
		return;
	}
	catch(const std::exception &e){}
	try
	{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "Memory address: " << &b << std::endl;
		std::cout << "Base ref is of type: B" << std::endl;
		return;
	}
	catch(const std::exception &e){}
	try
	{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "Memory address: " << &c << std::endl;
		std::cout << "Base ref is of type: C" << std::endl;
		return;
	}
	catch(const std::exception &e){}
}


int	main(void)
{
	Base	*p;

	srand(time(0));
	p = generate();
	std::cout << "Memory address: " << p << std::endl;
	identify(p);
	identify(*p);
	delete (p);
	return (0);
}
