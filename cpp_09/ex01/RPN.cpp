/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:28:40 by mintan            #+#    #+#             */
/*   Updated: 2025/09/07 21:38:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Used constructors and destructors*/

RPN::RPN(std::string const &input): _input(input)
{
	return;
}

RPN::~RPN()
{
	return;
}

/* Member Functions */
void	RPN::stackStack()
{
	std::string				extract;
	std::string::size_type	posSt;
	std::string::size_type	posEnd;

	if (this->_input.empty())
		throw (std::runtime_error(ERR_EMPTYARG));
	posSt = 0;
	posEnd = 0;
	while (posEnd != this->_input.npos)
	{
		posEnd = this->_input.find(' ', posSt);
		extract = this->_input.substr(posSt, posEnd - posSt);
		posSt = posEnd + 1;
		if (extract.empty())
			continue;

		// std::cout << "Extract: " << extract << " | validation: " << _validateExtract(extract) <<std::endl;

		switch (_validateExtract(extract))
		{
			case 0:		//operator
			{
				this->_resolveOperation(extract);
				break;
			}
			case 1:		//operand
			{
				this->_stack.push(std::atoi(extract.c_str()));
				break;
			}
			default:	//invalid input
				break;
		}
	}
}

/* Description: prints the result after calculation. If there is more 1 item
   on the stack, display an error instead */
void	RPN::printResult()
{
	if (this->_stack.size() != 1)
		std::cerr << ERR_WRONGORDER << std::endl;
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
		if (i == 0 && static_cast<char>(input[i]) == '-' && input.length() > 1)
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
	std::string	errMsg;

	if (_isOperator(extract))
		return (0);
	else if (_isInt(extract))
	{
		if (_isWithinRange(RNG_VAL_LOW, RNG_VAL_UPPER, std::atoi(extract.c_str())))
			return (1);
		errMsg = ERR_RNGEXCEED1 + extract + " | " + ERR_RNGEXCEED2 + \
		_myItoa(RNG_VAL_LOW) + ", " + _myItoa(RNG_VAL_UPPER);
		throw (std::runtime_error(errMsg));
	}
	throw (std::runtime_error(ERR_INVALIDINPUT + extract));
}

std::string	RPN::_myItoa(int i)
{
	std::ostringstream	oss;

	oss << i;
	return(oss.str());
}

void	RPN::_resolveOperation(std::string const &extract)
{
	int	operandFirst;
	int	operandSecond;

	// std::cout << "stack size: " << this->_stack.size() << std::endl;
	if (this->_stack.size() < 2)
		throw(std::runtime_error(ERR_WRONGORDER));
	operandSecond = this->_stack.top();
	this->_stack.pop();
	operandFirst = this->_stack.top();
	this->_stack.pop();

	// std::cout << "first, second: " << operandFirst << ", " << operandSecond << " | operator: " << _isOperator(extract) <<  std::endl;

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
			if (operandSecond == 0)
				throw(std::runtime_error(ERR_ZERODIVISION));
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



