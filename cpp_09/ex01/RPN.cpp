/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:28:40 by mintan            #+#    #+#             */
/*   Updated: 2025/09/06 21:45:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Used constructors and destructors*/

RPN::RPN(std::string const &input)
{
	this->_stackStack(input);
	return;
}

RPN::RPN()
{
	//split string and populate stack
	return;
}

RPN::~RPN()
{
	return;
}

/* Member Functions */

/* Description: used for troubleshooting only */
void	RPN::printStack()
{
	std::string::size_type	orSize;

	orSize = this->_stack.size();
	for (std::string::size_type i = 0; i < orSize; ++i)
	{
		std::cout << "val: " << this->_stack.top() << std::endl;
		this->_stack.pop();
	}
}





/* Helper Functions */
void	RPN::_stackStack(std::string const &input)
{
	std::string				extract;
	std::string::size_type	posSt;
	std::string::size_type	posEnd;

	posSt = 0;
	posEnd = 0;
	while (posEnd != input.npos)
	{
		posEnd = input.find(' ', posSt);
		extract = input.substr(posSt, posEnd - posSt);
		posSt = posEnd + 1;
		if (extract.empty())
			continue;
		this->_stack.push(extract);
	}
}
