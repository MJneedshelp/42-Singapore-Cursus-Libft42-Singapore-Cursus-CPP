/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:48:45 by mintan            #+#    #+#             */
/*   Updated: 2025/07/24 17:19:46 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* Using the explicit keyword */

class	A	{};
class	B	{};

class	C
{
	public:

				C(A const & _);
	explicit	C(B const & _);			//makes it such that conversion must be explicit, prevents implicit conversion
										//to think about which constructors can use implicit / explicit conversion
};

C::C(A const & _)
{
	return;
}

C::C(B const & _)
{
	return;
}
/* ************************************************************************** */

void	f(C const & _)
{
	return;
}


/* ************************************************************************** */



int	main(void)
{
	f( A());				//implicit conversion
	f( B());				//implicit conversion for an explicit constructor

	return (0);
}
