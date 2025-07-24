/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastOperator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:06:27 by mintan            #+#    #+#             */
/*   Updated: 2025/07/24 16:28:11 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class CastOperatorTest
{
	private:
		float	_val;

	public:
		CastOperatorTest(float const v);
		float		getVal(void);
		operator float(void);
		operator int();
};

/* Definition - Implementation*/

CastOperatorTest::CastOperatorTest(float const v): _val(v)
{
	return;
}

float	CastOperatorTest::getVal(void)
{
	return (this->_val);
}

CastOperatorTest::operator float()
{
	return (this->_val);
}

CastOperatorTest::operator int()
{
	return (static_cast<int>(this->_val));
}

/* Test out the CastOperatorTest */

int	main(void)
{
	CastOperatorTest	a(42.042f);
	float				b = a;
	int					c = a;

	std::cout << "a: " << a.getVal() << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	return (0);
}
