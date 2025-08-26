/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typenametest.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:23:56 by mintan            #+#    #+#             */
/*   Updated: 2025/08/27 00:30:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Wrapper
{
	public:
		typedef	int	inner_type;
};

template<typename T>
void	test_typedef()
{
	typename T::inner_type	x = 42;
	std::cout<< "Value: " << x << std::endl;
}

int	main(void)
{
	test_typedef<Wrapper>();
	return (0);
}

