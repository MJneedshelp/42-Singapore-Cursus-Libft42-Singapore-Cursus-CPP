/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:43:35 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 10:57:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





template<typename T>
typename T::const_iterator	easyfind(T const &haystack, int const needle)
{
	typename T::const_iterator	itFind;
	std::ostringstream			opstream;

	opstream << needle;
	itFind = std::find(haystack.begin(), haystack.end(), needle);
	if (itFind == haystack.end())
		throw(std::runtime_error("Element not found: " + opstream.str()));
	return (itFind);
}
