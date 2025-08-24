/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:59:11 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 13:14:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <list>
#include <vector>

#include <algorithm>
#include <iostream>
#include <sstream>
#include <exception>
#include <string>

#define ERR_NOSIZE	"A size of 0 is like a nothing burger. Do better"
#define ERR_FILLED	"The container is full already. Max size: "
#define ERR_SPAN	"A span requires 2 points (at least)"


class Span
{
    public:
        Span(unsigned int N);
        ~Span();
		const unsigned int	maxSize;
        void    addNumber(int val);				//check if the max number is reached
		//Add an exception here later for the case where the number assigned is to small


		int					shortestSpan(void);
		int					longestSpan(void)	const;

		/* Getters */
		unsigned int		getFill(void)	const;
		int					getVectPos(unsigned int idx)	const;


	private:
		Span();												//private
		Span(Span const &src);								//Copy constructor
		Span&				operator=(Span const &src);			//Copy assignment operator
		std::vector<int>	_intVec;
		unsigned int		_fill;                              //initialise as 0, used to track which spaces are filled. Increment with add number / add range
		std::string			_maxSizeStr;
};

std::ostream&	operator<<(std::ostream &o, Span const &inst);


#endif

