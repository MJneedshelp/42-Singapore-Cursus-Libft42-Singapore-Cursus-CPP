/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:59:11 by mintan            #+#    #+#             */
/*   Updated: 2025/08/25 01:13:57 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <list>
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <exception>
#include <string>

#define ERR_NOSIZE	"A size of 0 is like a nothing burger. Do better"
#define ERR_FILLED	"The container is full already. Max size: "
#define ERR_RNGEXCEED	"The container will overflow if the range is added. Exceeded by: "
#define ERR_SPAN	"A span requires 2 points (at least)"

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const &src);
		Span&				operator=(Span const &src);
		~Span();
		unsigned int	maxSize;

		/* Setters */
		void				addNumber(int val);
		template<typename It>
		void				addRange(It itSt, It itEnd);
		void				setFill(unsigned int fill);

		/* Getters */
		unsigned int		getFill(void)	const;
		int					getVectPos(unsigned int idx)	const;
		int					shortestSpan(void)	const;
		int					longestSpan(void)	const;

	private:
		Span();
		// Span(Span const &src);
		// Span&				operator=(Span const &src);
		std::vector<int>	_intVec;
		unsigned int		_fill;
		std::string			_maxSizeStr;
};

std::ostream&	operator<<(std::ostream &o, Span const &inst);

#include "Span.tpp"
#endif

