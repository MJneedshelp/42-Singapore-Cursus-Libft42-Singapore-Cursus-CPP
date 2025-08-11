/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:49:15 by mintan            #+#    #+#             */
/*   Updated: 2025/08/12 02:47:38 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <typeinfo>
#include <stdexcept>

#define ERR_OOB "Error: index provided is out-of-bounds"

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);

		/* Operator Overloads */
		T&				operator[](unsigned int	idx)	const;
		T&				operator[](unsigned int	idx);
		Array&			operator=(Array const &src);

		/* Getters */
		unsigned int	size(void)						const;
		std::string		getType(void)					const;

	private:
		T				*_array;
		unsigned int	_arrSz;
};

template<typename T>
std::ostream&	operator<<(std::ostream &o, Array<T> const &inst);

#include "Array.tpp"
#endif
