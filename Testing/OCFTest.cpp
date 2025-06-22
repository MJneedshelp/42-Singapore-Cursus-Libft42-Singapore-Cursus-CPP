/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OCFTest.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 13:47:58 by mintan            #+#    #+#             */
/*   Updated: 2025/06/22 14:08:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OCF.hpp"

int	main(void)
{
	OCF	def;
	OCF	para(42);
	OCF	copy(def);

	std::cout << def << std::endl;
	std::cout << para << std::endl;
	std::cout << copy << std::endl;

	std::cout << "memory address of [def]: " << &def << std::endl;
	std::cout << "memory address of [para]: " << &para << std::endl;
	std::cout << "memory address of [copy]: " << &copy << std::endl;

	copy = para;

	std::cout << def << std::endl;
	std::cout << para << std::endl;
	std::cout << copy << std::endl;

	return(0);
}
