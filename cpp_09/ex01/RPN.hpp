/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:27:04 by mintan            #+#    #+#             */
/*   Updated: 2025/09/06 21:32:32 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <stack>
#include <iostream>
#include <string>


#define ERR_NOARG "[ERROR] This programme must be run with 1 arg: stack"
#define ERR_EMPTYARG "[ERROR] You cannot have an empty stack"


class RPN
{
	public:
		RPN(std::string const &input);
		RPN();

		~RPN();


		/* Type Definitions - Alias */



		/* Member Functions */
		void	printStack(void);
		void	calculate(void);							//goes through each stack member -> validate -> include in the calculation if no errors



	private:
		/* Unused OCF */
		// RPN();
		RPN(RPN const &src);
		RPN&	operator=(RPN const &src);

		/* Data members */
		std::stack<std::string>	_stack;


		/* Helper functions */
		void			_stackStack(std::string const &input);	//split the string via spaces and populate the stack
		static	void	_validateStack();					//validate the stack. can use this function during calculate




};


#endif
