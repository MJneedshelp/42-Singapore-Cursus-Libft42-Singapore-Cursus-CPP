/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:47:34 by mintan            #+#    #+#             */
/*   Updated: 2025/08/07 09:15:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::cout << "============ Non-const ============ " << std::endl;
	{
		int		arr[] = {5, 6, 7, 8, 9};

		::iter(arr, 5, ::doubleT<int>);
		::iter(arr, 5, ::printT<int>);
	}
	std::cout << "\n============ Const ============ " << std::endl;
	{
		const int	arr[] = {0, 1, 2, 3, 4};

		::iter(arr, 5, ::printT<int>);
	}




	return (0);
}
