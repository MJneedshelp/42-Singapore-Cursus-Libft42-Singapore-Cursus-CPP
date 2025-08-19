/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:43:35 by mintan            #+#    #+#             */
/*   Updated: 2025/08/20 02:02:16 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>


template<typename T>
typename T::const_iterator	easyfind(T const &haystack, int const needle)
{
	typename T::const_iterator	itFind;

	itFind = std::find(haystack.begin(), haystack.end(), needle);
	if (itFind == haystack.end())
		throw(needle);
	return (itFind);
}

// const char*	ValNotFound::what() const throw()
// {
// 	return("Grade cannot be higher than 1");
// }
