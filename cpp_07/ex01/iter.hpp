/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:52:28 by mintan            #+#    #+#             */
/*   Updated: 2025/08/09 10:16:57 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

/* Iter templates for const and non-const */
template<typename T, typename F>
void	iter(T *array, unsigned int arrLen, F const &fx);

template<typename T, typename F>
void	iter(T const *array, unsigned int arrLen, F const &fx);

/* Generic functions - typename T*/
template<typename T>
void	printT(T const &thing);

template<typename T>
void	doubleT(T &thing);

#include "iter.tpp"

#endif
