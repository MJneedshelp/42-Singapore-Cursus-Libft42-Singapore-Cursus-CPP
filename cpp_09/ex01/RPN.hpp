/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:27:04 by mintan            #+#    #+#             */
/*   Updated: 2025/09/29 08:41:55 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <stack>
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits.h>
#include <sstream>

#define RNG_VAL_LOW -10
#define RNG_VAL_UPPER 10

#define ERR_NOARG "[ERROR] This programme must be run with 1 arg: rpn expression"
#define ERR_EMPTYARG "[ERROR] You cannot have an empty expression"
#define ERR_INVALIDINPUT "[ERROR] The provided input is not an integer or an operator: "
#define ERR_RNGEXCEED1 "[ERROR] The provided integer has exceeded the range: "
#define ERR_RNGEXCEED2 "[Lower, Upper] "
#define ERR_ZERODIVISION "[ERROR] Invalid input: Division by 0 detected"
#define ERR_WRONGORDER "[ERROR] Unable to resolve all operands with the given expression"

class RPN
{
	public:
		RPN(std::string const &input);
		~RPN();

		/* Member Functions */
		void	stackStack();
		void	printResult(void);

	private:
		/* Unused OCF */
		RPN();
		RPN(RPN const &src);
		RPN&	operator=(RPN const &src);

		/* Data members */
		std::string const	_input;
		std::stack<double>	_stack;

		/* Helper functions */
		static	bool		_isInt(std::string const &input);
		static	bool		_withinIntLimits(std::string const &input);
		static	bool		_isWithinRange(int lower, int upper, int val);
		static	int			_isOperator(std::string const &input);
		static	int			_validateExtract(std::string const &extract);
		static	std::string	_myItoa(int	i);
		void				_resolveOperation(std::string const &extract);
};
#endif
