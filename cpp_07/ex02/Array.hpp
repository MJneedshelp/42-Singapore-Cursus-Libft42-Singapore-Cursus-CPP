/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:49:15 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 10:35:53 by mintan           ###   ########.fr       */
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
		~Array(void);

		T* array;


	private:
		unsigned int	_arrSz;




};

#include "Array.tpp"
#endif
