/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:34:10 by mintan            #+#    #+#             */
/*   Updated: 2025/11/19 13:55:13 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Test
{
	public:
		Test();
		~Test();

		typedef	std::vector<int>					vecInt;
		typedef std::vector<int>::const_iterator	itVecInt;

		void	addVecItem(int i);
		vecInt&	getVec();





	private:
		vecInt								_myVec;

};

std::ostream&	operator<<(std::ostream &o, Test &src);





#endif
