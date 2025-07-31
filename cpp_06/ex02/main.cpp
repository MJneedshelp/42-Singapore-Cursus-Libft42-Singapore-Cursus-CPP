/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:31:37 by mintan            #+#    #+#             */
/*   Updated: 2025/07/31 14:03:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <bits/stdc++.h>

Base	*generate(void)
{
	long	randval;

	srand(time(0));
	randval = rand() % (3) + 1;

}

// void	identify(Base *p)
// {

// }

// void	idenitfy(Base &p)
// {

// }


int	main(void)
{
	long	randval;

	srand(time(0));
	randval = rand() % (3) + 1;

	std::cout << randval << std::endl;

	return (0);
}
