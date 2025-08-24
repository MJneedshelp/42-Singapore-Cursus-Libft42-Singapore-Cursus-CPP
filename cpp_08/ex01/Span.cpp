/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:29:54 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 19:28:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*Constructors and Destructors*/
Span::Span(unsigned int N):
	maxSize(N), _intVec(), _fill(0)
{
	std::ostringstream	oss;

	if(N == 0)
		throw (std::runtime_error(ERR_NOSIZE));
	oss << N;
	this->_maxSizeStr = oss.str();
	return;
}

Span::~Span(void)
{
	return;
}

/* Setters */
void	Span::addNumber(int val)
{
	if (this->_fill == this->maxSize)
		throw (std::runtime_error(ERR_FILLED + this->_maxSizeStr));
	this->_intVec.push_back(val);
	++(this->_fill);
	std::sort(this->_intVec.begin(), this->_intVec.end());
}

/* Getters */
unsigned int	Span::getFill(void)	const
{
	return (this->_fill);
}

int	Span::getVectPos(unsigned int idx)	const
{
	return (this->_intVec[idx]);
}

int	Span::shortestSpan(void)	const
{
	unsigned int						shortestSpan;
	unsigned int						temp;
	std::vector<int>::const_iterator	itVec;

	if (this->_fill <= 1)
		throw(std::runtime_error(ERR_SPAN));
	shortestSpan = *(this->_intVec.begin() + 1) - *(this->_intVec.begin());
	for (itVec = this->_intVec.begin(); itVec != (this->_intVec.end() - 1); ++itVec)
	{
		temp = *(itVec + 1) - *(itVec);
		if (temp < shortestSpan)
			shortestSpan = temp;
	}
	return (shortestSpan);
}

int	Span::longestSpan(void)	const
{
	int	max;
	int	min;

	if (this->_fill <= 1)
		throw(std::runtime_error(ERR_SPAN));
	max = *(std::max_element(this->_intVec.begin(), this->_intVec.end()));
	min = *(std::min_element(this->_intVec.begin(), this->_intVec.end()));
	return (max - min);
}







/* Operator Overloads */
std::ostream&	operator<<(std::ostream &o, Span const &inst)
{
	if (inst.getFill() > 1)
	{
		o << "Shortest Span: " << inst.shortestSpan();
		o << " | Longest Span: " << inst.longestSpan() << std::endl;
	}
	o << "==== Contents ====" << std::endl;
	for (unsigned int i = 0; i < inst.getFill(); ++i)
		o << inst.getVectPos(i) << " ";
	return (o);
}

