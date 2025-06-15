/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:12:26 by mintan            #+#    #+#             */
/*   Updated: 2025/06/15 14:29:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zoms;
	int		N;

	N = 5;
	zoms = zombieHorde(N, "nameless");
	for (int i = 0; i < N; ++i)
	{
		zoms[i].punch();
	}
	delete []zoms;
	return (0);
}
