/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:49:15 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 19:24:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		//Array(Array const &src);					//copy constructor
		//Array&	operator=(Array const &src);	//assignment operator
		T&		operator[](unsigned int	idx);	//subscript operator
		~Array(void);

		/* Setter */
		void	setArr(unsigned int	idx, T elem);


		const unsigned int	_arrSz;


	private:
		T					*_array;
		// const unsigned int	_arrSz;

};

// template<typename T>
// std::ostream&	operator<<(std::ostream &o, Array<T> const &inst);

#include "Array.tpp"
#endif
