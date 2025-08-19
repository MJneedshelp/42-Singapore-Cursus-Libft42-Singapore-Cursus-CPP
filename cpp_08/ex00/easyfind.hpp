/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:39:21 by mintan            #+#    #+#             */
/*   Updated: 2025/08/20 02:44:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>

template<typename T>
typename T::const_iterator	easyfind(T const &haystack, int const needle);

#include "easyfind.tpp"

#endif
