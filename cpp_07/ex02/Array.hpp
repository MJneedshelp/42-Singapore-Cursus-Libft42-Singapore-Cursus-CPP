/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:49:15 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 21:47:55 by mintan           ###   ########.fr       */
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
		Array(Array &src);					//copy constructor
		T&		operator[](unsigned int	idx);		//subscript operator
		~Array(void);

		/* Setter */
		void	setArr(unsigned int	idx, T elem);


		unsigned int	getArrSz(void);
		std::string		getType(void);



	private:
		T				*_array;
		unsigned int	_arrSz;

		/* set as private to prevent direct usage -> may cause mem leaks
		   if the original object already has memory allocated and this is used
		   as an assignment
		*/

		Array&			operator=(Array &src);


};

template<typename T>
std::ostream&	operator<<(std::ostream &o, Array<T> &inst);

#include "Array.tpp"
#endif
