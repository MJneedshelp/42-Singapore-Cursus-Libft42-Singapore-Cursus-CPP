/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Overload.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:44:37 by mintan            #+#    #+#             */
/*   Updated: 2025/06/18 13:59:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Overload.hpp"

Overload::Overload(void)
{
	return;
}

Overload::~Overload(void)
{
	return;
}

void	Overload::fx(char const c) const
{
	std::cout << "Overloaded with char: " << c << std::endl;
}

void	Overload::fx(int const i) const
{
	std::cout << "Overloaded with int: " << i << std::endl;
}

void	Overload::fx(double const d) const
{
	std::cout << "Overloaded with double: " << d << std::endl;
}

void	Overload::fx(Overload const &o) const
{
	std::cout << "Overloaded with instance of Overload class" << std::endl;
}

int	main(void)
{
	Overload	boom;

	boom.fx('b');
	boom.fx(42);
	boom.fx(4.2);
	boom.fx(boom);

	return(0);
}
