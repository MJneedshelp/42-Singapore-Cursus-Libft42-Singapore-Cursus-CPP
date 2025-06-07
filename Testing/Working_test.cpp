/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working_test.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:06:46 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 14:26:13 by mintan           ###   ########.fr       */
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


	//Using pointers to point to members variables within a class
	int		Poor::*ptr = NULL;
	ptr = &Poor::money;

	beggar.*ptr = 10000;
	std::cout << "Beggar money: " << beggar.money << std::endl;

	chooser.*ptr = 50000;
	std::cout << "Chooser money: " << chooser.money << std::endl;



	//Using pointers to point to member functions within a class
	Poor	*beggar_ptr = &beggar;
	void	(Poor::*fx)(void) const;

	fx = &Poor::fx_intro;
	//Accessing the member function using the function pointer
	(beggar.*fx)();
	//Accessing the member function using the function pointer
	(beggar_ptr->*fx)();


	return 0;
}
