/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working_test.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:06:46 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 13:22:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Working.class.hpp"

int	main(void)
{
	Poor	person('M', 24, 42);

	person.setSelfesteem(99);
	std::cout << "Self-esteem: " << person.getSelfesteem() << std::endl;
	person.setSelfesteem(-42);
	std::cout << "Self-esteem: " << person.getSelfesteem() << std::endl;


	return 0;
}
