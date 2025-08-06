/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:52:28 by mintan            #+#    #+#             */
/*   Updated: 2025/08/07 01:25:19 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T, typename F>
void	iter(T *array, int arrLen, F fx);


template<typename T>
void	printT(T const &thing);





#include "iter.tpp"

#endif
