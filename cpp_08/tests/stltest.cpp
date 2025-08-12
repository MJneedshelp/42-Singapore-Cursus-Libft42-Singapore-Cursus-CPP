/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stltest.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:10:50 by mintan            #+#    #+#             */
/*   Updated: 2025/08/12 10:43:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

int	main(void)
{
	{
		std::list<int>					listInt;
		std::list<int>::const_iterator	itInt;
		std::list<int>::const_iterator	itIntEnd;

		itIntEnd = listInt.end();
		listInt.push_back(0);
		listInt.push_back(55);
		listInt.push_back(99);

		itInt = listInt.begin();
		std::cout << *(++itInt) << std::endl;
		std::cout << *(--itIntEnd) << std::endl;



	}




	return (0);




}
