/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 23:16:07 by mintan            #+#    #+#             */
/*   Updated: 2025/08/25 00:38:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template<typename It>
void	Span::addRange(It itSt, It itEnd)
{
	unsigned int		rngSz;
	std::ostringstream	oss;

	rngSz = std::distance(itSt, itEnd);
	oss << this->_fill + rngSz - this->maxSize;
	// std::cout << "Distance: " << rngSz << std::endl;
	if (this->_fill + rngSz > this->maxSize)
		throw(std::runtime_error(ERR_RNGEXCEED + oss.str()));
	this->_intVec.insert(this->_intVec.begin(), itSt, itEnd);
	this->_fill += rngSz;
	std::sort(this->_intVec.begin(), this->_intVec.end());
}
