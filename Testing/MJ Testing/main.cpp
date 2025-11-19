/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:47:13 by mintan            #+#    #+#             */
/*   Updated: 2025/11/19 13:54:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

int	main(void)
{
	Test	t1;

	t1.addVecItem(1);
	t1.addVecItem(2);
	t1.addVecItem(3);

	std::cout << "Print test obj: " << t1 << std::endl;



	return (0);
}

