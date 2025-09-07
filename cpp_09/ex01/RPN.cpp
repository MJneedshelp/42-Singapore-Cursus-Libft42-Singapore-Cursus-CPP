/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:28:40 by mintan            #+#    #+#             */
/*   Updated: 2025/09/07 14:03:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Used constructors and destructors*/

RPN::RPN(std::string const &input)
{
	this->_stackStack(input);
	return;
}

RPN::~RPN()
{
	return;
}

/* Member Functions */


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
		switch (_validateExtract(extract))
		{
			case 0:		//operator
			{
				//resolve operation
				break;
			}
			case 1:		//operand
			{
				this->_stack.push(std::atoi(extract.c_str()));
				break;
			}
			default:	//invalid input
				throw(std::exception());
		}
	}
}

/* Description: prints the result after calculation. If there is more 1 item
   on the stack, display an error instead */
void	RPN::printResult()
{
	if (this->_stack.size() != 1)
		std::cerr << ERR_STACKEND << std::endl;
	else
		std::cout << "[Result] " << this->_stack.top() << std::endl;
}







/* Helper Functions */


bool	RPN::_withinIntLimits(const std::string &input)
{
	long	inputLong;

	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
		return (false);
	return(true);
}


bool	RPN::_isInt(const std::string &input)
{
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (i == 0 && static_cast<char>(input[i]) == '-')
			continue;
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	return (_withinIntLimits(input));
}

bool	RPN::_isWithinRange(int lower, int upper, int val)
{
	return ( lower <= val && val <= upper);
}

int	RPN::_isOperator(std::string const &input)
{
	if (input == "+")
		return (1);
	if (input == "-")
		return (2);
	if (input == "/")
		return (3);
	if (input == "*")
		return (4);
	return (0);
}

int	RPN::_validateExtract(std::string const &extract)
{
	if (_isInt(extract))
	{
		if (_isWithinRange(RNG_VAL_LOW, RNG_VAL_UPPER, std::atoi(extract.c_str())))
			return (0);
		else
		{
			std::cerr << ERR_NOARG + extract << " | " << ERR_RNGEXCEED2 \
			<< RNG_VAL_LOW << ", " << RNG_VAL_UPPER << std::endl;
			return (-1);
		}
	}
	else if (_isOperator(extract))
		return (1);
	else
	{
		std::cerr << ERR_INVALIDINPUT + extract << std::endl;
		return (-1);
	}
}

void	RPN::_resolveOperation(std::string const &extract)
{
	int	operandFirst;
	int	operandSecond;

	//check if there is at least 2 items on the stack first, if not throw


	switch (_isOperator(extract))
	{
		case 1:	//+
		{
			this->_stack.push(operandFirst + operandSecond);
			break;
		}
		case 2:	//-
		{
			this->_stack.push(operandFirst - operandSecond);
			break;
		}
		case 3:	///
		{
			//chck for division by 0
			this->_stack.push(operandFirst / operandSecond);
			break;
		}
		case 4:	//*
		{
			this->_stack.push(operandFirst * operandSecond);
			break;
		}

		default:
			break;
	}
}



