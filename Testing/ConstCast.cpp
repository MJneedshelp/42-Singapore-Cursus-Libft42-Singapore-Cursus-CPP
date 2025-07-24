/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConstCast.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:02:39 by mintan            #+#    #+#             */
/*   Updated: 2025/07/24 15:33:07 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>

int	main(void)
{
	int			a = 42;							//Reference value

	int const	*b = &a;						//Implicit promotion | generic -> accurate | OK
	// int			*c = b;						//Implicit demotion | accurate -> generic | NOK
	int			*d = const_cast<int*>(b);		//Explicit demotion | accurate -> generic | OK....but check your design on why you need to use this

	std::cout << "Memory of a: " << &a << std::endl;
	std::cout << "Memory of b: " << b << std::endl;
	std::cout << "Memory of d: " << d << std::endl;

	return (0);
}
