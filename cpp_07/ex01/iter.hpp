/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:52:28 by mintan            #+#    #+#             */
/*   Updated: 2025/08/07 18:13:15 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

/* Iter templates for const and non-const */
template<typename T, typename F>
void	iter(T *array, unsigned int arrLen, F fx);

template<typename T, typename F>
void	iter(T const *array, unsigned int arrLen, F fx);

/* Generic functions - typename T*/
template<typename T>
void	printT(T const &thing);

template<typename T>
void	doubleT(T &thing);

#include "iter.tpp"

#endif
