/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:27:04 by mintan            #+#    #+#             */
/*   Updated: 2025/09/07 14:00:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <stack>
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits.h>

#define RNG_VAL_LOW -10
#define RNG_VAL_UPPER 10


#define ERR_NOARG "[ERROR] This programme must be run with 1 arg: stack"
#define ERR_EMPTYARG "[ERROR] You cannot have an empty stack"
#define ERR_STACKEND "[ERROR] Unable to resolve all operands with the given stack"
#define ERR_RNGEXCEED1 "[ERROR] The provided integer has exceeded the range: "
#define ERR_RNGEXCEED2 "[Lower, Upper] "
#define ERR_INVALIDINPUT "[ERROR] The provided input is not an integer or an operator: "




class RPN
{
	public:
		RPN(std::string const &input);
		RPN();

		~RPN();


		/* Type Definitions - Alias */



		/* Member Functions */
		void	_stackStack(std::string const &input);	//throw if there is an error

		void	printResult(void);



	private:
		/* Unused OCF */
		// RPN();
		RPN(RPN const &src);
		RPN&	operator=(RPN const &src);

		/* Data members */
		std::stack<int>	_stack;


		/* Helper functions */
		static	bool	_isInt(std::string const &input);
		static	bool	_withinIntLimits(std::string const &input);
		static	bool	_isWithinRange(int lower, int upper, int val);
		static	int		_isOperator(std::string const &input);
		static	int		_validateExtract(std::string const &extract);
		void			_resolveOperation(std::string const &extract);








};


#endif
