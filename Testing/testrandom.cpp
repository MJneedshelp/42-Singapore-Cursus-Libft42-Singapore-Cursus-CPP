/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrandom.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:36:51 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 14:03:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bits/stdc++.h>

int	main(void)
{
	long	randVal;

	std::cout << RAND_MAX << std::endl;
	std::cout << RAND_MAX/2 << std::endl;

	srand(time(0));
	randVal = rand();

	std::cout << "Rand Value: " << randVal << std::endl;

	if (randVal < RAND_MAX / 2)
		std::cout << "Lower" << std::endl;
	else
	std::cout << "Higher" << std::endl;
	return (0);
}
