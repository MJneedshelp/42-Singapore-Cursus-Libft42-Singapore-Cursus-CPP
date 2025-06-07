/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working_test.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:06:46 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 13:56:57 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Working.class.hpp"

int	main(void)
{
	Poor	beggar('M', 24, 42);
	std::cout << "No. of instances of Poor after beggar: " \
	<< Poor::getInstances() << std::endl;

	Poor	chooser('M', 11, 22);
	std::cout << "No. of instances of Poor after chooser: " \
	<< Poor::getInstances() << std::endl;

	std::cout << "Address of beggar: " << &beggar << std::endl;
	std::cout << "Address of chooser: " << &chooser << std::endl;

	beggar.setSelfesteem(42);
	chooser.setSelfesteem(24);

	if (beggar.compareSelfesteem(&chooser) == 0)
		std::cout << "beggar and chooser are structually the same" << std::endl;
	else
		std::cout << "beggar and chooser are structually differnet" << std::endl;




	return 0;
}
