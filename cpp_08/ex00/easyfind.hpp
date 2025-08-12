/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:39:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/12 14:51:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <array>
#include <vector>
#include <list>
#include <iostream>

template<typename T>	//T is a container: Array / Vector / List
//return type is some sort of iterator?
unsigned int	easyfind(T const &haystack, int needle);







#include <easyfind.tpp>

#endif
