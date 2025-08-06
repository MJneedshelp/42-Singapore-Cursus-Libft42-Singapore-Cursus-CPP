/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:19:46 by mintan            #+#    #+#             */
/*   Updated: 2025/08/06 23:43:18 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template<typename T>
void	swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T const&	min(const T &x, const T &y)
{
	return (x > y ? y : x);
}

template<typename T>
T const&	max(const T &x, const T &y)
{
	return (x >= y ? x : y);
}

#endif
