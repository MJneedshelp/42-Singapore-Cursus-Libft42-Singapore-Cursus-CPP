/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCastTest.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:57:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/22 14:29:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int		a = 42;

	double	b = a;							//implicit promotion	-> ok
	int		c = b;							//implicit demotion		-> nok
	int		d = static_cast<int>(b);		//explicit demotion		-> ok

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;


	


	return (0);

}
